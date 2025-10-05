/*
 * API_debounce.c
 *
 *  Created on: Sep 22, 2025
 *      Author: tomas1908
 */

#include "API_delay.h"
#include "API_debounce_port.h"
#include "API_debounce.h"

const tick_t no_noise=40;
debounceState_t state;
delay_t NB_delay;
volatile bool no_rebound_state=false;

void debounceFSM_init(){
	buttonReleased();
	state=BUTTON_UP;				//Inicializacion primer estado
}


void debounceFSM_update(){
	uint32_t Button_state=Read_Blue_Button();

	switch(state){
		case BUTTON_UP:
			if(Button_state==0){
				delayInit(&NB_delay,no_noise);
				state=BUTTON_FALLING;
			}
			break;

		case BUTTON_DOWN:
			if(Button_state==1){
				delayInit(&NB_delay,no_noise);
				state=BUTTON_RAISING;
			}
			break;

		case BUTTON_FALLING:
			if(!delayRead(&NB_delay)){
				if(Button_state==0){
					buttonPressed();
					state=BUTTON_DOWN;
				}
				else{
					buttonReleased();
					state=BUTTON_UP;
				}
			}
			break;

		case BUTTON_RAISING:
			if(!delayRead(&NB_delay)){
				if(Button_state==1){
					buttonReleased();
					state=BUTTON_UP;
				}
				else{
					buttonPressed();
					state=BUTTON_DOWN;
				}
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
