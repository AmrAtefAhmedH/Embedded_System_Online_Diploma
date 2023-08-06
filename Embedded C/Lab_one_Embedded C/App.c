#include "Uart.h"

unsigned char My_Text[50] = "Learn-in-depth<Amr Atef>";
unsigned char const My_Text2[50] = "Learn-in-depth<Amr Atef>";
unsigned char My_Text3[50] = "Learn-in-depth<Amr Atef>";
void main(void)
{
	Uart_Send(My_Text);
}