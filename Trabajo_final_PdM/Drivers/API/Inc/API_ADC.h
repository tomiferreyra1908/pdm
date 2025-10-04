/*
 * API_ADC.h
 *
 *  Created on: Sep 16, 2025
 *      Author: tomas1908
 */

#ifndef API_INC_API_ADC_H_
#define API_INC_API_ADC_H_

#include <stdbool.h>
#include <stdint.h>

typedef struct{													//paquetes de datos
	uint32_t ADC_value;
	bool dato_ready;
}dato_t;

void ADC_Start(void);
void ADC_Stop(void);

#endif /* API_INC_API_ADC_H_ */
