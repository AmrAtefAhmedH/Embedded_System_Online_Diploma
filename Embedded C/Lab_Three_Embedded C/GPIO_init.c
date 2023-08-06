#include "ProtoTypes.h"

void GPIOF_init(void)
{
	SYSCTL_RCGC2_R |= (unsigned int)0x20;
	while ( (SYSCTL_RCGC2_R & 0x20 ) == 0) {} // wait to make sure GIOPF is up and running
	GPIO_PORTF_DIR_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;
} 