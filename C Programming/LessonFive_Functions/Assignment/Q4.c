/*
 * main.c
 *
 *  Created on: August 15, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#include "string.h"
int Power (int x , int y ) ; /* Declaration on the function */
int main()
{
	int x , y ;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	printf("%d^%d = %d",x,y,Power(x,y));
}
int Power (int x , int y)
{
	if(y == 1)
		return x ;
	return x * Power(x,y-1);
}


