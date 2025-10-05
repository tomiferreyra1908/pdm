/*
 * API_debounce_port.c
 *
 *  Created on: Oct 4, 2025
 *      Author: tomas1908
 */


#include "API_debounce_port.h"
#include "stm32f4xx_hal.h"


uint32_t Read_Blue_Button(){
	return HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
}
