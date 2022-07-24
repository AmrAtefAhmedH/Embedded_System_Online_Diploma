/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int i ;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	if (i%2 == 0)
		printf("%d is even",i);
	else
		printf("%d is odd",i);
	return 0 ;
}
