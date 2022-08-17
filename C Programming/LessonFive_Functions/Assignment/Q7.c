/*
 * main.c
 *
 *  Created on: August 17, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#include "string.h"
int ConvertToInteger(char Array[] , int N);
int Power (int x , int y);
int main()
{
	char ASCII_Number[5];
	int N_digits , value ;
	printf("Enter The number: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",ASCII_Number);
	N_digits = strlen(ASCII_Number);
	value = ConvertToInteger(ASCII_Number,N_digits);
	printf("%d",value);
}
int Power (int x , int y)
{
	if(y == 0)
		return 1 ;
	return x * Power(x,y-1);
}
int ConvertToInteger(char Array[] , int N)
{
	int i , Number = 0;
	int p = N ;
	for (i = 0 ; i < N ; i++)
	{
		int diff = Array[i] - '0' ;
		Number += Power(10,--p) * diff ;
	}
	return Number;
}
