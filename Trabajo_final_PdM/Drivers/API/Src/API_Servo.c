/*
 * API_servo.c
 *
 *  Created on: Sep 30, 2025
 *      Author: tomas1908
 */


#include "API_Servo.h"
#include "stm32f4xx_hal.h"

extern TIM_HandleTypeDef htim3;

void PWM_Control(uint32_t control){
	control = (control * SCALE) + OFFSET;
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, control);
}


void PWM_Init(void){
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
}
