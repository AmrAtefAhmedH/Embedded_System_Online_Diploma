/*
 * main.c
 *
 *  Created on: Aug 19, 2022
 *      Author: user
 */
#include "stdio.h"
#include "string.h"
void split_String(char String[] , int Array[] , int N);
int Add_digits(int Array[],int N);
int main()
{
	char Number_String[100];
	int Numbers[100];
	int N;
	printf("Enter your number: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",Number_String);
	N = strlen(Number_String);
	split_String(Number_String,Numbers,N);
	printf("%d",Add_digits(Numbers,N));
	return 0 ;
}
/*Function to split the digits into individual number*/
void split_String(char String[] , int Array[] , int N)
{
	int i ;
	for (i=0 ; i < N; i++)
		Array[i] = String[i] - '0';
}
/* function to add the individual numbers in the array and return the sum*/
int Add_digits(int Array[],int N)
{
	int i ;
	int sum = 0 ;
	for (i = 0 ; i < N ; i++)
		sum += Array[i];
	return sum;
}

