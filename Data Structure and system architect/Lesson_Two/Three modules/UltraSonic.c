#include "UltraSonic.h"
int US_ReadDistance(int lower,int upper);


void(*Us_state)();
static int Distance = 0 ;

void US_init()
{
	printf(".... Us init Done ....\n");
}

STATE_Function(US_busy)
{
	US_state_ID = Busy;
	Distance = US_ReadDistance(40,60);
	printf("Reading from US sensor, Distance = %d\n",Distance);
	US_getDistance(Distance);
	Us_state = STATE_Function_Address(US_busy);
}


int US_ReadDistance(int lower,int upper)
{
	int random = (rand() % (upper - lower + 1)) + lower;
	return random;
}
