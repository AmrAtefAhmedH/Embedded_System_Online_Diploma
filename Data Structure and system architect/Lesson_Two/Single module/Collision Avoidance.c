#include "stdio.h"
#include "CA.h"

void setup();
int main(void)
{
	volatile int i ;
	setup();
	while(1)
	{
		for(i=0;i<5000000;i++);
		CA_state();
	}
}
void setup()
{
	CA_state = STATE(Waiting);
}
