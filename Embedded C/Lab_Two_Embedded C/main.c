#include "stdint.h"

#define RCC_base 0x40021000
#define GPIOA_base 0x40010800
#define APB2ENR 	*((volatile uint32_t *)(RCC_base + 0x18))
#define GPIOA_CRH 	*((volatile uint32_t *)(GPIOA_base + 0x04))
#define GPIOA_ODR 	*((volatile uint32_t *)(GPIOA_base + 0x0C))

typedef union {
	volatile uint32_t All_Fields;
	struct {
		volatile uint32_t reserved:13;
		volatile uint32_t p_13:1;
	}pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_base + 0x0C);

unsigned char g_var[3] = {1,2,3};
unsigned char const c_var[3] = {1,2,3};

int main(void)
{
	APB2ENR |= 1<<2 ;
	GPIOA_CRH &= ~(0x00f00000);
	GPIOA_CRH |= 0x00200000;
	while (1)
	{
		int i;
		R_ODR->pin.p_13 = 1;
		for(i = 0 ; i < 10000 ; i++);
		R_ODR->pin.p_13 = 0;	
		for(i = 0 ; i < 10000 ; i++);
	}
	return 0 ;
}
