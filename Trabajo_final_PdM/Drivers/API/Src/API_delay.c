/*
 * API_delay.c
 *
 *  Created on: Sep 7, 2025
 *      Author: tomas1908
 */

#include "API_delay.h"
#include "stm32f4xx_hal.h"

/*Funcion para inicializar el delay*/
void delayInit( delay_t * delay, tick_t duration ){
	delay->running=able_mode;								//asignaciones
	delay->duration=duration;
	delay->startTime= HAL_GetTick();
}

/*Funcion para chechear si se termino el tiempo de delay*/
mode_t delayRead( delay_t * delay ){
	if(delay->running==able_mode){
		if(HAL_GetTick()-delay->startTime >= delay->duration){
			delay->running=ready_mode;
		}
	}
	return (delay->running);
}


void delayDisable(delay_t * delay){
	delay->running=disable_mode;
}
