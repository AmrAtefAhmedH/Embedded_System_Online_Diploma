#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_

#define SYSCTL_Base 0x400FE000
#define GPIOF 0x40025000
#define SYSCTL_RCGC2_R *((volatile unsigned long*)((unsigned long*)(SYSCTL_Base + 0x108)))
#define GPIO_PORTF_DIR_R *((volatile unsigned long*)((unsigned long*)(GPIOF + 0x400)))
#define GPIO_PORTF_DEN_R *((volatile unsigned long*)((unsigned long*)(GPIOF + 0x51C)))
#define GPIO_PORTF_DATA_R *((volatile unsigned long*)((unsigned long*)(GPIOF + 0x3FC)))

void GPIOF_init(void);

#endif