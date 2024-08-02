#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/i2c-dev.h>

//
#include "mpu6050.h"

void init() {
    // set clock source

    // set gyro scale
    // set accelerometer scale
    // set sleep mode
}

void test_connection() {
    // request device id
    uint16_t device_id = NULL;
    return device_id;
}
