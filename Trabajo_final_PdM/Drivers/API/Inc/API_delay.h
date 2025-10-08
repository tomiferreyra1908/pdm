/*
 * API_delay.h
 *
 *  Created on: Sep 7, 2025
 *      Author: tomas1908
 */


/*		Aqui se implementan dos tipos de NB-delays
 *		La primera version hecha para la clase de PdM de CESE. (se implementa en API_debounce.c)
 * 		La segunda version hecha a medida para la implementacion del sistema servo-ADC
 * */



#ifndef API_INC_API_DELAY_H_
#define API_INC_API_DELAY_H_

#include <stdbool.h>
#include <stdint.h>
#include "API_delay_port.h"

typedef uint32_t tick_t;
typedef enum{disable_mode, able_mode, ready_mode}mode_t;		//Modos del NB-delay 2

typedef struct{													//Paquete de datos de cada delay
   tick_t startTime;
   tick_t duration;
   mode_t running;
} delay_t;


void delayInit( delay_t * delay, tick_t duration );
bool delayRead( delay_t * delay );
void delayWrite( delay_t * delay, tick_t duration );

void delayInit_2( delay_t * delay, tick_t duration );
mode_t delayRead_2( delay_t * delay );
void delayDisable_2(delay_t * delay);

#endif /* API_INC_API_DELAY_H_ */
