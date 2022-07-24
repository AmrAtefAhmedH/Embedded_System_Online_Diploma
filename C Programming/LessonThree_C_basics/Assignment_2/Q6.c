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
	int i , sum ;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1 , sum =0 ; i <= n ; i++)
	{
		sum += i ;
	}
	printf("Sum = %d ",sum);
	return 0;
}
