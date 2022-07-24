/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	float x , y , z ;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x , &y , &z);
	if(x>y)
	{
		if(x>z)
			printf("Largest number = %f",x);
		else
			printf("Largest number = %f",z);
	}
	else
	{
		if(y>z)
			printf("Largest number = %f",y);
		else
			printf("Largest number = %f",z);
	}
	return 0 ;
}
