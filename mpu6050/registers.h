#ifndef REGISTERS_H
#define REGISTERS_H

/*
 * This section contains hardcoded registers derived from the datasheet pages 6-8
 */
// Self Test Registers
#define MPU6050_SELF_TEST_X_R           0x0D
#define MPU6050_SELF_TEST_Y_R           0x0E
#define MPU6050_SELF_TEST_Z_R           0x0F
#define MPU6050_SELF_TEST_A_R           0x10

// Sample Rate Divider
#define MPU6050_SMPLRT_DIV_RW           0x19

// Configuration
#define MPU6050_CONFIG_RW               0x1A

// Gyroscope Configuration
#define MPU6050_GYRO_CONFIG_RW          0x1B

// Accelerometer Configuration
#define MPU6050_ACCEL_CONFIG_RW         0x1C

// FIFO Enable
#define MPU6050_FIFO_EN_RW              0x23

// I2C Master Control
#define MPU6050_I2C_MST_CTRL_RW         0x24

// I2C Slave 0-3 Control and Data Out
#define MPU6050_I2C_SLV0_ADDR_RW        0x25
#define MPU6050_I2C_SLV0_REG_RW         0x26
#define MPU6050_I2C_SLV0_CTRL_RW        0x27
#define MPU6050_I2C_SLV1_ADDR_RW        0x28
#define MPU6050_I2C_SLV1_REG_RW         0x29
#define MPU6050_I2C_SLV1_CTRL_RW        0x2A
#define MPU6050_I2C_SLV2_ADDR_RW        0x2B
#define MPU6050_I2C_SLV2_REG_RW         0x2C
#define MPU6050_I2C_SLV2_CTRL_RW        0x2D
#define MPU6050_I2C_SLV3_ADDR_RW        0x2E
#define MPU6050_I2C_SLV3_REG_RW         0x2F
#define MPU6050_I2C_SLV3_CTRL_RW        0x30
#define MPU6050_I2C_SLV4_ADDR_RW        0x31
#define MPU6050_I2C_SLV4_REG_RW         0x32
#define MPU6050_I2C_SLV4_DO_RW          0x33
#define MPU6050_I2C_SLV4_CTRL_RW        0x34
#define MPU6050_I2C_SLV4_DI_R           0x35

// I2C Master Status
#define MPU6050_I2C_MST_STATUS_R        0x36

// Interrupt Registers
#define MPU6050_INT_PIN_CFG_RW          0x37
#define MPU6050_INT_ENABLE_RW           0x38
#define MPU6050_INT_STATUS_R            0x3A

// Accelerometer Measurements
#define MPU6050_ACCEL_XOUT_H_R          0x3B
#define MPU6050_ACCEL_XOUT_L_R          0x3C
#define MPU6050_ACCEL_YOUT_H_R          0x3D
#define MPU6050_ACCEL_YOUT_L_R          0x3E
#define MPU6050_ACCEL_ZOUT_H_R          0x3F
#define MPU6050_ACCEL_ZOUT_L_R          0x40

// Temperature Measurement
#define MPU6050_TEMP_OUT_H_R            0x41
#define MPU6050_TEMP_OUT_L_R            0x42

// Gyroscope Measurements
#define MPU6050_GYRO_XOUT_H_R           0x43
#define MPU6050_GYRO_XOUT_L_R           0x44
#define MPU6050_GYRO_YOUT_H_R           0x45
#define MPU6050_GYRO_YOUT_L_R           0x46
#define MPU6050_GYRO_ZOUT_H_R           0x47
#define MPU6050_GYRO_ZOUT_L_R           0x48

// External Sensor Data
#define MPU6050_EXT_SENS_DATA_00_R      0x49
#define MPU6050_EXT_SENS_DATA_01_R      0x4A
#define MPU6050_EXT_SENS_DATA_02_R      0x4B
#define MPU6050_EXT_SENS_DATA_03_R      0x4C
#define MPU6050_EXT_SENS_DATA_04_R      0x4D
#define MPU6050_EXT_SENS_DATA_05_R      0x4E
#define MPU6050_EXT_SENS_DATA_06_R      0x4F
#define MPU6050_EXT_SENS_DATA_07_R      0x50
#define MPU6050_EXT_SENS_DATA_08_R      0x51
#define MPU6050_EXT_SENS_DATA_09_R      0x52
#define MPU6050_EXT_SENS_DATA_10_R      0x53
#define MPU6050_EXT_SENS_DATA_11_R      0x54
#define MPU6050_EXT_SENS_DATA_12_R      0x55
#define MPU6050_EXT_SENS_DATA_13_R      0x56
#define MPU6050_EXT_SENS_DATA_14_R      0x57
#define MPU6050_EXT_SENS_DATA_15_R      0x58
#define MPU6050_EXT_SENS_DATA_16_R      0x59
#define MPU6050_EXT_SENS_DATA_17_R      0x5A
#define MPU6050_EXT_SENS_DATA_18_R      0x5B
#define MPU6050_EXT_SENS_DATA_19_R      0x5C
#define MPU6050_EXT_SENS_DATA_20_R      0x5D
#define MPU6050_EXT_SENS_DATA_21_R      0x5E
#define MPU6050_EXT_SENS_DATA_22_R      0x5F
#define MPU6050_EXT_SENS_DATA_23_R      0x60

// I2C Slave Data Out
#define MPU6050_I2C_SLV0_DO_RW          0x63
#define MPU6050_I2C_SLV1_DO_RW          0x64
#define MPU6050_I2C_SLV2_DO_RW          0x65
#define MPU6050_I2C_SLV3_DO_RW          0x66

// I2C Master Delay Control
#define MPU6050_I2C_MST_DELAY_CTRL_RW   0x67

// Signal Path Reset
#define MPU6050_SIGNAL_PATH_RESET_RW    0x68

// User Control
#define MPU6050_USER_CTRL_RW            0x6A

// Power Management Registers
#define MPU6050_PWR_MGMT_1_RW           0x6B
#define MPU6050_PWR_MGMT_2_RW           0x6C

// FIFO Count Registers
#define MPU6050_FIFO_COUNTH_R           0x72
#define MPU6050_FIFO_COUNTL_R           0x73

// FIFO Read Write
#define MPU6050_FIFO_R_W_RW             0x74

// Who Am I
#define MPU6050_WHO_AM_I_R              0x75

#endif // MPU6050_H
