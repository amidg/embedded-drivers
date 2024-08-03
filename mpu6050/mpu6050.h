#ifndef MPU6050_H
#define MPU6050_H

/* device information */
#include "registers.h"
#include "config.h"

/* auto generated file during the build process containing platform bindings */
#include "interface/i2c.h"

// internal functions declarations
static void set_clock_source(uint8_t src);
static void set_gyro_range_scale(uint8_t scale);
static void set_accel_range_scale(uint8_t scale);
static void enable_sleep(int is_enabled);
static uint8_t get_device_id();

/*
 * High-Level functions client should interact with
 */
void init() {
    set_clock_source(MPU6050_CLOCK_PLL_XGYRO);
    set_gyro_range_scale(MPU6050_GYRO_FS_250);
    set_accel_range_scale(MPU6050_ACCEL_FS_2);
    enable_sleep(0);
}

uint8_t test_connection() {
    return get_device_id() == 0x34;
}

/*
 *
    bool I2Cdev::writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data, void *wireObj) {
        uint8_t b = 0;
        if (readByte(devAddr, regAddr, &b, I2Cdev::readTimeout, wireObj) != 0) {
            uint8_t mask = ((1 << length) - 1) << (bitStart - length + 1);
            data <<= (bitStart - length + 1); // shift data into correct position
            data &= mask; // zero all non-important bits in data
            b &= ~(mask); // zero all important bits in existing byte
            b |= data; // combine data with existing byte
            return writeByte(devAddr, regAddr, b, wireObj);
        } else {
            return false;
        }
    }

    bool I2Cdev::writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data, void *wireObj) {
	    i2c_cmd_handle_t cmd;

	    cmd = i2c_cmd_link_create();
	    ESP_ERROR_CHECK(i2c_master_start(cmd));
	    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, (devAddr << 1) | I2C_MASTER_WRITE, 1));
	    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, regAddr, 1));
	    ESP_ERROR_CHECK(i2c_master_write_byte(cmd, data, 1));
	    ESP_ERROR_CHECK(i2c_master_stop(cmd));
	    ESP_ERROR_CHECK(i2c_master_cmd_begin(I2C_NUM, cmd, 1000/portTICK_PERIOD_MS));
	    i2c_cmd_link_delete(cmd);

	    return true;
    }

    int8_t I2Cdev::readByte(uint8_t devAddr, uint8_t regAddr, uint8_t *data, uint16_t timeout, void *wireObj) {
        return readBytes(devAddr, regAddr, 1, data, timeout, wireObj);
    }
 */

/*
 * Low-Level functions for internal use only
 */
static void set_clock_source(uint8_t src) {
    //I2Cdev::writeBits(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_CLKSEL_BIT, MPU6050_PWR1_CLKSEL_LENGTH, source, wireObj)
}

static void set_gyro_range_scale(uint8_t scale) {
    //I2Cdev::writeBits(devAddr, MPU6050_RA_GYRO_CONFIG, MPU6050_GCONFIG_FS_SEL_BIT, MPU6050_GCONFIG_FS_SEL_LENGTH, range, wireObj);
}

static void set_accel_range_scale(uint8_t scale) {
    //I2Cdev::writeBits(devAddr, MPU6050_RA_ACCEL_CONFIG, MPU6050_ACONFIG_AFS_SEL_BIT, MPU6050_ACONFIG_AFS_SEL_LENGTH, range, wireObj);
}

static void enable_sleep(int is_enabled) {
    //I2Cdev::writeBit(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_SLEEP_BIT, enabled, wireObj);
}

static uint8_t get_device_id() {
    /*
     *  I2Cdev::readBits(devAddr, MPU6050_RA_WHO_AM_I, MPU6050_WHO_AM_I_BIT, MPU6050_WHO_AM_I_LENGTH, buffer, I2Cdev::readTimeout, wireObj);
     *  return buffer[0];
     */
}

#endif
