/*
 * main.c
 *
 *  Created on: August 15, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int PirmeOrNot(int x);/* Declaration on the function */
int main()
{
	int T1,T2 , i ;
	printf("Enter Two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&T1,&T2);
	printf("prime numbers between %d and %d are : ",T1,T2);
	for(i = T1+1 ; i < T2 ; i++)
	{
		if (i!=1 && !PirmeOrNot(i))
			printf("%d ",i);
	}
	return 0 ;
}
int PirmeOrNot(int x)
{
	int i ;
	int R = 0;
	for (i=2 ; i <= x/2 ; i++)
	{
		if(x%i == 0)
		{
			R = 1 ;
			break;
		}
	}
	return R;
}
