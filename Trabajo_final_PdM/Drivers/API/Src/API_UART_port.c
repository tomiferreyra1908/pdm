/*
 * API_UART.c
 *
 *  Created on: Oct 4, 2025
 *      Author: tomas1908
 */

#include "API_UART_port.h"
#include "API_Display.h"

extern UART_HandleTypeDef huart4;
extern volatile uint8_t rxByte;

void UART_Tx(uint32_t data_tx){
	HAL_UART_Transmit(&huart4, (uint8_t*)&data_tx, sizeof(uint32_t),HAL_MAX_DELAY);
}


void UART_Rx_IT(void){
	HAL_UART_Receive_IT(&huart4, &rxByte, 1);
}
