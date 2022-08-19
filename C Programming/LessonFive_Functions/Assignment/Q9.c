/*
 * main.c
 *
 *  Created on: Aug 19, 2022
 *      Author: user
 */
#include "stdio.h"
#include "string.h"
void Input_Array(int Array[],int size);
int CheckUnique(int Array[] , int size);

int main()
{
	int N;
	printf("Enter the number or elemets: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);
	int Array[N];
	Input_Array(Array,N);
	printf("%d",CheckUnique(Array,N));
	return 0 ;

}
void Input_Array(int Array[],int size)
{
	int i;
	for (i = 0 ; i < size ; i++)
	{
		printf("Enter [%d] : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&Array[i]);
	}
}
int CheckUnique(int Array[] , int size)
{
	int i ;
	int x = 0 ;
	for(i = 0 ; i < size ; i++)
		x ^= Array[i];
	return x ;
}
