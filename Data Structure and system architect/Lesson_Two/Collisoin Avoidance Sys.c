/*
 ============================================================================
 Name        : Collisoin.c
 Author      : Amr Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "State.h"
#include "UltraSonic.h"
#include "Dc_motor.h"
#include "CA_module.h"

int main(void)
{
	volatile int i ;
	Setup();
	while(1)
	{
		Us_state();
		CA_State();
		DC_state();
		for(i=0;i<5000000;i++);
	}

}

void Setup()
{
	US_init();
	DC_init();

	Us_state = STATE_Function_Address(US_busy);
	DC_state = STATE_Function_Address(DC_idle);
	CA_State = STATE_Function_Address(CA_Waiting);
}
