/*
 * main.c
 *
 *  Created on: Aug 19, 2022
 *      Author: user
 */
#include "stdio.h"
#define N_Bit 32
int NumberOfOne(int number);
int main()
{
	int number ;
	printf("Enter your number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("%d",NumberOfOne(number));
	return 0 ;

}
int NumberOfOne(int number)
{
	int i ;
	int ones = 0 ;
	int x ;
	for (i=0 ; i <N_Bit-1 ;i++)
	{
		x = number >> i ;
		if(x&1)
			ones++;
	}
	return ones;
}

