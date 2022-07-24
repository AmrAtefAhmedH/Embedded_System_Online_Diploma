/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x > 0)
		printf("%f is positive",x);
	else if (x < 0 )
		printf("%f is negative",x);
	else
		printf("you entered zero.");
	return 0 ;
}
