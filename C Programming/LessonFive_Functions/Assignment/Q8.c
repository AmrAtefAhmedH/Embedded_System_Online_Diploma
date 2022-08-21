/*
 * main.c
 *
 *  Created on: Aug 19, 2022
 *      Author: user
 */
#include "stdio.h"
#include "string.h"
int Add_digits(char Array[],int N);
int main()
{
	char Number_String[100];
	int N;
	printf("Enter your number: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",Number_String);
	N = strlen(Number_String);
	printf("%d",Add_digits(Number_String,N));
	return 0 ;
}

/* function to add the individual numbers in the array and return the sum*/
int Add_digits(char Array[],int N)
{
	int i ;
	int sum = 0 ;
	for (i = 0 ; i < N ; i++)
		sum += (Array[i]-'0');
	return sum;
}