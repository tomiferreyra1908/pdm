/*
 * API_Servo_port.c
 *
 *  Created on: Oct 5, 2025
 *      Author: tomas1908
 */


#include "stm32f4xx_hal.h"
#include "API_Servo_port.h"
#include "Error_Management.h"

extern TIM_HandleTypeDef htim3;


void PWM_update(uint32_t ctrl){
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, ctrl);
}

void PWM_Init_port(){
	HAL_StatusTypeDef ans=HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	if(ans == HAL_ERROR){
		System_Error_Handler();
	}
}
