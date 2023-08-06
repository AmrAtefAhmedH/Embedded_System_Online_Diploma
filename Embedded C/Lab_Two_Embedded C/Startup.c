#include "stdint.h"
extern uint32_t _StackPointer;
extern int main(void);
void Rest_Handler(void);

void default_Handler(void)
{
	Rest_Handler();
}

void NMI_Handler(void) __attribute__((weak,alias("default_Handler")));
void Hard_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));
void Memory_Management_Handler(void) __attribute__((weak,alias("default_Handler")));
void Bus_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));
void Usage_Fault_Handler(void) __attribute__((weak,alias("default_Handler")));

extern uint32_t _E_Text_;
extern uint32_t _S_Data_;
extern uint32_t _E_Data_;
extern uint32_t _S_Bss_;
extern uint32_t _E_Bss_;

uint32_t vectors[] __attribute__((section(".vectors"))) = {
	(uint32_t) &_StackPointer,
	(uint32_t) &Rest_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &Hard_Fault_Handler,
	(uint32_t) &Memory_Management_Handler,
	(uint32_t) &Bus_Fault_Handler,
	(uint32_t) &Usage_Fault_Handler
};


void Rest_Handler(void)
{	
	//copy data from ROM to RAM
	uint32_t Data_Size = (uint8_t*)&_E_Data_ - (uint8_t*)&_S_Data_;
	uint8_t* P_src = (uint8_t*)&_E_Text_ ;
	uint8_t* P_dst = (uint8_t*)&_S_Data_ ;
	while (Data_Size != 0)
	{
		*P_dst = *P_src ;
		P_dst++;
		P_src++;
		Data_Size--;
	}
	
	// init the .bss with zero
	uint32_t bss_Size = (uint8_t*)&_S_Bss_ - (uint8_t*)&_E_Bss_;
	P_dst = (uint8_t*)&_S_Bss_ ;
	while(bss_Size != 0)
	{
		*P_dst = (uint8_t)0 ;
		P_dst++;
		bss_Size--;
	}
	
	
	main();
}