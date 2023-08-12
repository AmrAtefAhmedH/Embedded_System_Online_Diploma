/*
 * UltraSonic.h
 *
 *  Created on: Aug 12, 2023
 *      Author: user
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "State.h"

extern void(*Us_state)();

enum
{
	Busy
}US_state_ID;

STATE_Function(US_busy);
void US_init();

#endif /* ULTRASONIC_H_ */
