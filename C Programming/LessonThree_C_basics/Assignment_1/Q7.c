/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	float a , b , t;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a = a + b;
	b = a - b;
	a = a - b ;
	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);
	return 0;
}
