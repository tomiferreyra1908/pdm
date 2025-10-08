/*
 * API_debug_port.c
 *
 *  Created on: Oct 7, 2025
 *      Author: tomas1908
 */


#include "API_debug_port.h"
#include "stm32f4xx_hal.h"

void debugger_GPIO(uint32_t actual_state){
	switch(actual_state){
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			break;
	}
}
