#ifndef __COMMUNICATION_CONSTS_H__
#define __COMMUNICATION_CONSTS_H__

#define I2C_DEVICE_FEEDER   1
#define I2C_DEVICE_PUMPS    2

#define I2C_CMD_FEEDER_RUN        1
#define I2C_CMD_FEEDER_LOAD_COAL  2

#define I2C_CMD_GENERAL_SET_WORKMODE            20
#define I2C_CMD_GENERAL_GET_PARAM               21
#define I2C_CMD_GENERAL_SET_PARAM               22
#define I2C_CMD_GENERAL_GET_PARAMS_COUNT        23
//one argument: index of parameter to dscribe
#define I2C_CMD_GENERAL_GET_PARAM_DESCRIPTION   24  
//one argument: index of parameter to get name
#define I2C_CMD_GENERAL_GET_PARAM_NAME          25

#define I2C_PARAM_TYPE_EXEC      0b00000001
#define I2C_PARAM_TYPE_VALUE     0b00000010

#define I2C_PARAM_UNIT_MASK      0b11110000

#define I2C_PARAM_UNIT_SECONDS   0b00010000
#define I2C_PARAM_UNIT_MINUTES   0b00100000
#define I2C_PARAM_UNIT_DEG_C     0b00110000
#define I2C_PARAM_UNIT_PERCENT   0b01000000

#endif

