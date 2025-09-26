/*
 * API_debounce.c
 *
 *  Created on: Sep 22, 2025
 *      Author: tomas1908
 */

#include "API_debounce.h"
#include "stm32f4xx_hal.h"
#include "API_delay.h"

const tick_t no_noise=40;
debounceState_t state;
delay_t NB_delay;
volatile bool no_rebound_state=false;

void debounceFSM_init(){
	buttonReleased();
	state=BUTTON_UP;				//Inicializacion primer estado
}


void debounceFSM_update(){
	uint32_t Button_state=HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);

	switch(state){
		case BUTTON_UP:
			if(Button_state==GPIO_PIN_RESET){
				delayInit(&NB_delay,no_noise);
				state=BUTTON_FALLING;
			}
			break;

		case BUTTON_DOWN:
			if(Button_state==GPIO_PIN_SET){
				delayInit(&NB_delay,no_noise);
				state=BUTTON_RAISING;
			}
			break;

		case BUTTON_FALLING:
			if(!delayRead(&NB_delay)){						//mirar Button_state==reset
				buttonPressed();
				state=BUTTON_DOWN;
			}
			break;

		case BUTTON_RAISING:
			if(!delayRead(&NB_delay)){
				buttonReleased();
				state=BUTTON_UP;
			}
			break;
		default:
			break;
	}
}

void buttonPressed(){
	no_rebound_state=true;
}
void buttonReleased(){
	no_rebound_state=false;
}

bool readKey(void){
	return no_rebound_state;
}
