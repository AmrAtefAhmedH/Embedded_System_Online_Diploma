#include "stdint.h"
/*extern unsigned long _StackPointer;*/

static unsigned long Stack_Top[256];

extern unsigned long _E_Text_;
extern unsigned long _S_Data_;
extern unsigned long _E_Data_;
extern unsigned long _S_Bss_;
extern unsigned long _E_Bss_;


extern int main(void);
void Rest_Handler(void);

void default_Handler(void)
{
	Rest_Handler();
}

void NMI_Handler(void) __attribute__((weak,alias("default_Handler")));
void Hard_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));

void (* const G_Ptr_Func_Vectors[])() __attribute__((section(".vectors"))) =
{
	(void(*)()) ((unsigned long)Stack_Top + sizeof(Stack_Top)),
	&Rest_Handler,
	&NMI_Handler,
	&Hard_Fault_Handler
};

/*
unsigned long vectors[] __attribute__((section(".vectors"))) = {
	(unsigned long) (&Stack_Top[0] + sizeof(Stack_Top)),
	(unsigned long) &Rest_Handler,
	(unsigned long) &NMI_Handler,
	(unsigned long) &Hard_Fault_Handler
};
*/


void Rest_Handler(void)
{	
	uint32_t Data_Size = (uint8_t*)&_E_Data_ - (uint8_t*)&_S_Data_;
	uint8_t* P_src = (uint8_t*)&_E_Text_ ;
	uint8_t* P_dst = (uint8_t*)&_S_Data_ ;
	while (Data_Size != (uint32_t)0)
	{
		*P_dst = *P_src ;
		P_dst++;
		P_src++;
		Data_Size--;
	}
	
	// init the .bss with zero
	uint32_t bss_Size = (uint8_t*)&_S_Bss_ - (uint8_t*)&_E_Bss_;
	P_dst = (uint8_t*)&_S_Bss_ ;
	while(bss_Size != (uint32_t)0)
	{
		*P_dst = (uint8_t)0 ;
		P_dst++;
		bss_Size--;
	}
}