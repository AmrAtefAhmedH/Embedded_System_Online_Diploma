/*
 * CA.h
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

extern void (*CA_state) ();

enum
{
	CA_Waiting,
	CA_Driving
}CA_State_ID;

STATE_Define(Waiting);
STATE_Define(Driving);

#endif /* CA_H_ */
