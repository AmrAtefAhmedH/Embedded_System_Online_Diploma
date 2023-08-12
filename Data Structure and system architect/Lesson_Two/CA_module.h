/*
 * CA_module.h
 *
 *  Created on: Aug 12, 2023
 *      Author: user
 */

#ifndef CA_MODULE_H_
#define CA_MODULE_H_
#include "State.h"

extern void(*CA_State)();

enum
{
	waiting,
	driving
}CA_state_ID;

STATE_Function(CA_Waiting);
STATE_Function(CA_Driving);
#endif /* CA_MODULE_H_ */
