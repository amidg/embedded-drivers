cmake_minimum_required(VERSION 3.10)
project(embedded_drivers)

# Define platform options
option(PLATFORM_LINUX "Build for Linux platform" OFF)
# Add other platform options if needed

# Configure platform-specific i2c header
if(PLATFORM_ESP32)
    add_definitions(-DPLATFORM_ESP32)
    set(I2C_HEADER "interfaces/esp32/i2c.h")
elseif(PLATFORM_LINUX)
    add_definitions(-DPLATFORM_LINUX)
    set(I2C_HEADER "interfaces/linux/i2c.h")
else()
    message(FATAL_ERROR "No platform specified. Use -DPLATFORM_ESP32 or -DPLATFORM_LINUX.")
endif()

# Configure the common i2c header file
configure_file(
    "${CMAKE_SOURCE_DIR}/interfaces/i2c.h.in"
    "${CMAKE_BINARY_DIR}/interfaces/i2c.h"
)

# Include directories
include_directories(${CMAKE_BINARY_DIR}/interfaces)
include_directories(${CMAKE_SOURCE_DIR}/interfaces)
include_directories(${CMAKE_SOURCE_DIR}/mpu6050)

# Add the mpu6050 directory
add_subdirectory(mpu6050)

# Add executable or library for your main application
#add_executable(i2c_driver main.c) # Replace with your actual source files
#target_link_libraries(i2c_driver mpu6050)
