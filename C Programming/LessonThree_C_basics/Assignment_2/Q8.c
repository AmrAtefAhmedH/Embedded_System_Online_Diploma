/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	char o ;
	float x , y ;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x , &y);
	switch(o)
	{
	case '+':
		printf("%2.2f + %2.2f = %2.2f",x,y,x+y);
	break;
	case '-' :
		printf("%2.2f - %2.2f = %2.2f",x,y,x-y);
	break;
	case '*' :
		printf("%2.2f * %2.2f = %2.2f",x,y,x*y);
	break;
	case '/' :
		printf("%2.2f / %2.2f = %2.2f",x,y,x/y);
	break;
	default :
		printf("invalid operator!");
	break;
	}
	return 0 ;
}
