/*
 * API_Servo_port.h
 *
 *  Created on: Oct 5, 2025
 *      Author: tomas1908
 */

#ifndef API_INC_API_SERVO_PORT_H_
#define API_INC_API_SERVO_PORT_H_

#include <stdbool.h>
#include <stdint.h>

void PWM_update(uint32_t ctrl);
void PWM_Init_port();

#endif /* API_INC_API_SERVO_PORT_H_ */
