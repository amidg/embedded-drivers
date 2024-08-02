# Create a library for the MPU6050
add_library(mpu6050 STATIC
    driver.c
)

# Link the mpu6050 library with the i2c functionality
target_include_directories(mpu6050 PRIVATE ${CMAKE_BINARY_DIR}/interfaces)
target_include_directories(mpu6050 PRIVATE ${CMAKE_SOURCE_DIR}/interfaces)
