/*
 * This folder allows to create nearly universal interface for the I2c allowing to use
 * it accross multiple platforms
 */
#ifndef I2C_H
#define I2C_H

#if defined(PLATFORM_ESP32)
#include "i2c_esp32.h"
#elif defined(PLATFORM_STM32H7)
#include "i2c_linux.h"
#elif defined(PLATFORM_LINUX)
#include "i2c_linux.h"
#else
#error "No platform defined"
#endif

#endif // I2C_H
