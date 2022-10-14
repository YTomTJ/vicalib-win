#pragma once

#include <HAL/config.h>
#include <HAL/Utils/Uri.h>

#include <memory>
#include <map>

namespace hal
{

// Forward declaration
template<typename BaseDevice> class DeviceFactory;

template<typename BaseDevice>
class DeviceRegistry
{
public:
    /// global device registery singleton 
    HAL_EXPORT static DeviceRegistry<BaseDevice> &Instance();

    HAL_EXPORT DeviceRegistry();
    HAL_EXPORT ~DeviceRegistry();

    /// Register factory pointer accessible by device_name
    HAL_EXPORT void RegisterFactory(
            const std::string& device_name,
            DeviceFactory<BaseDevice>* factory
            );

    // Register device 'name' as alias for 'alias'
    HAL_EXPORT void RegisterAlias(
            const std::string& name,
            const std::string& alias
            );

    // Get factory associated with uri
    HAL_EXPORT std::shared_ptr<BaseDevice> Create(const Uri &uri);

    HAL_EXPORT void Destroy(BaseDevice *dev);

    // print the map<string,Dec> table 
    HAL_EXPORT void PrintRegisteredDevices();

protected:

    // Map of device names to aliases.
    std::map<std::string,std::string> m_aliases;

    // Map of device name -> factory instance
    std::map<std::string,DeviceFactory<BaseDevice>*> m_factories;

/*
    struct DevInstance
    {
        Uri uri;
        std::shared_ptr<BaseDevice> dev;
    };
*/
//    // Vector of running instances
//    std::vector<DevInstance> m_instances;
};

}
