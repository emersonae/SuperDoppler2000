/*
 * AHT20.h
 *
 *  Created on: Apr 21, 2026
 *      Author: anyaemerson
 */

//code obtained from ControllersTech.com: https://controllerstech.com/interface-aht20-sensor-with-stm32/
//Author: Arun Rawat
//Published: June 14, 2025

#ifndef INC_AHT20_H_
#define INC_AHT20_H_

//#include "stm32l1xx_hal_i2c.h"
#include "stm32l1xx_hal.h" // This defines I2C_HandleTypeDef
#include "stdint.h"
#include "math.h"

//typedef struct __I2C_HandleTypeDef I2C_HandleTypeDef;

void AHT20_Init (I2C_HandleTypeDef* hi2c);
void AHT20_Measure (I2C_HandleTypeDef* hi2c, float *Temperature, float *Humidity);

#endif /* INC_AHT20_H_ */
