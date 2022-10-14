#pragma once

#define HAL_VERSION      0.2
#define Messages_VERSION 2

#include <HAL/ThirdParty/ThirdPartyConfig.h>

#ifdef HAL_BUILT_AS_STATIC
#define HAL_EXPORT
#define HAL_NO_EXPORT
#else
#ifndef HAL_EXPORT
#ifdef HAL_EXPORTS
/* We are building this library */
#define HAL_EXPORT __declspec(dllexport)
#else
/* We are using this library */
#define HAL_EXPORT __declspec(dllimport)
#endif
#endif

#ifndef HAL_NO_EXPORT
#define HAL_NO_EXPORT
#endif
#endif

#ifndef HAL_DEPRECATED
#define HAL_DEPRECATED __declspec(deprecated)
#endif
