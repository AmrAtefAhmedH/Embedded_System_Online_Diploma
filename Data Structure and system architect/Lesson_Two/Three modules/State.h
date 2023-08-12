/*
 * State.h
 *
 *  Created on: Aug 12, 2023
 *      Author: user
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include "stdlib.h"

// function generator
#define STATE_Function(Type) void State_##Type()
#define STATE_Function_Address(Type) State_##Type

void Setup();

// APIs connectors
void US_getDistance(int);
void DC_setSpeed(int);

#endif /* STATE_H_ */
