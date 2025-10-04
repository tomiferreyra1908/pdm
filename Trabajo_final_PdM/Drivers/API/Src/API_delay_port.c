/*
 * API_delay_TF_port.c
 *
 *  Created on: Sep 22, 2025
 *      Author: tomas1908
 */


#include "stm32f4xx_hal.h"

uint32_t get_tick(){
	return HAL_GetTick();
}

void Blocking_Delay(uint32_t time_delay){
	HAL_Delay(time_delay);
}
