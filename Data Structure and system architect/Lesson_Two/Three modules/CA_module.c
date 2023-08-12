#include "CA_module.h"

void(*CA_State)();
static int Distance = 0 ;
static int Speed = 0 ;
static int const Thershold = 50 ;
void US_getDistance(int D)
{
	Distance = D ;
	printf("US -------> CA_module , Distance = %d\n",Distance);
	CA_State = Distance <= Thershold ? STATE_Function_Address(CA_Waiting):STATE_Function_Address(CA_Driving) ;
}

STATE_Function(CA_Waiting)
{
	CA_state_ID = waiting ;
	printf("Waiting state in CA, Distance = %d\n",Distance);
	Speed = 0 ;
	DC_setSpeed(Speed);
}


STATE_Function(CA_Driving)
{
	CA_state_ID = driving ;
	printf("Driving state in CA, Distance = %d\n",Distance);
	Speed = 35 ;
	DC_setSpeed(Speed);
}
