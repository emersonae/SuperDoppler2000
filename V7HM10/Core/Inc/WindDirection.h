/*
 * AHT20.h
 *
 *  Created on: Apr 21, 2026
 *      Author: anyaemerson
 */

#include "stm32l1xx_hal.h" // This defines I2C_HandleTypeDef
#include "stdint.h"
#include "math.h"

void WindDirection_Init (void);
void WindDirection_Measure (void);

