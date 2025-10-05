/*
 * API_servo.c
 *
 *  Created on: Sep 30, 2025
 *      Author: tomas1908
 */


#include "API_Servo.h"

void PWM_Control(uint32_t control){
	control = (control * SCALE) + OFFSET;
	PWM_update(control);
}


void PWM_Init(void){
	PWM_Init_port();
}
