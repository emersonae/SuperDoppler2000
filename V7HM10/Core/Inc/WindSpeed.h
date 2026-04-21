/*
 * AHT20.h
 *
 *  Created on: Apr 21, 2026
 *      Author: anyaemerson
 */



//#include "stm32l1xx_hal_i2c.h"
#include "stm32l1xx_hal.h" // This defines I2C_HandleTypeDef
#include "stdint.h"
#include "math.h"

//typedef struct __I2C_HandleTypeDef I2C_HandleTypeDef;

void WindSpeed_Init (void);
void WindSpeed_Measure (void);
