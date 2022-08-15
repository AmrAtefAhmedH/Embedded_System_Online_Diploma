/*
 * main.c
 *
 *  Created on: August 15, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#include "string.h"
int Factorial(int x); /* Declaration on the function */
int main()
{
	int x ;
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d = %d",x,Factorial(x));
	return 0 ;
}

int Factorial(int x) /* Definition of the function */
{
	if (x == 1 || x == 0 )
		return 1 ;
	return x * Factorial(x-1);
}


