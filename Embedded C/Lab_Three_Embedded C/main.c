#include "ProtoTypes.h"
#include "stdint.h"

unsigned char g_var[3] = {1,2,3};
unsigned char const c_var[3] = {1,2,3};

int main(void)
{
	GPIOF_init();
	while(1)
	{
		int i ;
		GPIO_PORTF_DATA_R |= 1<<3 ;
		for (i=0 ; i < 500000 ; i++);
		GPIO_PORTF_DATA_R &= ~(1<<3) ;
		for (i=0 ; i < 500000 ; i++);
	}
	return 0 ; 
}