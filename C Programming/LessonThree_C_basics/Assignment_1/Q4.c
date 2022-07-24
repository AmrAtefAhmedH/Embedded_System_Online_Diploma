/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	float x , y ;
	printf("Enter two number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x ,&y);
	printf("Product: %f",x*y);
	return 0 ;
}
