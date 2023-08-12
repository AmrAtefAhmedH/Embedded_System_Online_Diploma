#include "Dc_motor.h"

static int Speed = 0 ;
void(*DC_state)();

void DC_init()
{
	printf(".... DC motor init. Done ....\n");
}

STATE_Function(DC_idle)
{
	DC_state_ID = idle;
	printf("DC_idle state, Speed = %d\n",Speed);
}

STATE_Function(DC_busy)
{
	DC_state_ID = busy ;
	printf("DC_busy state, Speed = %d\n",Speed);
	DC_state = STATE_Function_Address(DC_idle);
}

void DC_setSpeed(int S)
{
	Speed = S;
	DC_state =  STATE_Function_Address(DC_busy) ;
	printf("CA -------> DC_motor , Speed = %d\n",Speed);
}
