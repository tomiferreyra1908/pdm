/*
 * API_ADC.c
 *
 *  Created on: Sep 16, 2025
 *      Author: tomas1908
 */


#include "API_ADC.h"
#include "stm32f4xx_hal.h"

extern ADC_HandleTypeDef hadc1;
extern volatile dato_t ADC_data;

void ADC_Start(void){
	HAL_ADC_Start_IT(&hadc1);
}

void ADC_Stop(void){
	HAL_ADC_Stop_IT(&hadc1);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
  if (hadc->Instance == ADC1){
	  ADC_Stop();
	  ADC_data.ADC_value = HAL_ADC_GetValue(hadc);
	  ADC_data.dato_ready=true;
  }
}


