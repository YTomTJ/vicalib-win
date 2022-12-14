#pragma once

#include <dlfcn.h>
#include <iostream>

namespace hal
{

// Make sure all symbols for HAL are loaded and initialised.
// This may be required for static initialisation based
// plugin systems etc.
struct StaticInitForceLoad{
    StaticInitForceLoad(const char* libpath) {
        // TODO: check this path always works out.
        void *handle = dlopen(libpath, RTLD_NOW);
        if (!handle) {
            std::cerr << "Unable to dlopen '" << libpath << "'" << std::endl;
        }
    }
};

#if !defined(__APPLE__) && !defined(WIN32)
static StaticInitForceLoad g_StaticInitForceLoadHAL("libhal.so");
#endif

}
