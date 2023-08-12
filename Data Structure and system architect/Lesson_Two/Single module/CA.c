/*
 * CA.c
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */

#include "CA.h"
int US_ReadDistance(int lower,int upper);

// Vars

static int CA_Speed = 0;
static int CA_Distance = 0;
static int CA_Threshold = 50 ;

// pointer to function

void (*CA_state) ();

//APIs

STATE_Define(Waiting)
{
	// State name
	CA_State_ID = CA_Waiting;
	// state action
	CA_Speed = 0 ;
	//Event Check
	//US_getDistance(CA_Distance)
	CA_Distance = US_ReadDistance(40,60);
	CA_state = CA_Distance <= CA_Threshold ? STATE(Waiting):  STATE(Driving) ;
	printf("CA_Waiting : Distance = %d , Speed = %d\n",CA_Distance,CA_Speed);
}

STATE_Define(Driving)
{
	// State name
	CA_State_ID = CA_Driving;
	// state action
	CA_Speed = 35 ;
	//Event Check
	//US_getDistance(CA_Distance)
	CA_Distance = US_ReadDistance(40,60);
	CA_state = CA_Distance > CA_Threshold ? STATE(Driving):STATE(Waiting)  ;
	printf("CA_Driving : Distance = %d , Speed = %d\n",CA_Distance,CA_Speed);
}

int US_ReadDistance(int lower,int upper)
{
	int random = (rand() % (upper - lower + 1)) + lower;
	return random;
}
