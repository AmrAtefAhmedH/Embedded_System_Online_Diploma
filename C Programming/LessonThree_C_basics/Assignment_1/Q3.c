/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int x , y ;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x ,&y);
	printf("Sum: %d",x+y);
	return 0;
}
