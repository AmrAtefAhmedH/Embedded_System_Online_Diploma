#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "State.h"

extern void(*DC_state)();

enum
{
	idle,
	busy
}DC_state_ID;

void DC_init();
STATE_Function(DC_idle);
STATE_Function(DC_busy);

#endif /* DC_MOTOR_H_ */
