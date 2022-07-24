/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int n ;
	int i , factorial ;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if (n > 0)
	{
		for(i=1 , factorial = 1 ; i <= n ; i++)
			{
				factorial *= i ;
			}
		printf("factorial = %d ",factorial);
	}
	else if (n == 0)
	{
		factorial = 1;
		printf("factorial = %d ",factorial);
	}
	else
		printf("Error!!! factorial of negative number doesn`t exist.");
	return 0 ;
}
