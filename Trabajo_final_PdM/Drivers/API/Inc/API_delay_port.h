/*
 * API_delay_TF_port.h
 *
 *  Created on: Sep 22, 2025
 *      Author: tomas1908
 */

#ifndef API_INC_API_DELAY_TF_PORT_H_
#define API_INC_API_DELAY_TF_PORT_H_

#include <stdbool.h>
#include <stdint.h>

uint32_t get_tick();
void Blocking_Delay(uint32_t time_delay);


#endif /* API_INC_API_DELAY_TF_PORT_H_ */
