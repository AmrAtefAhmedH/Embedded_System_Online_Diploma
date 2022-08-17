/*
 * main.c
 *
 *  Created on: August 17, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#define Max_length 50
/* Max length of array is 50 element*/
void ScanArray(int Array[],int size);
void DisplayArray(int Array[],int size);
void swap(int F_Array[] , int S_Array[] , int MaxSize);

int main()
{
	int Array_one[Max_length];
	int Array_Two[Max_length];
	int L1,L2;

	printf("The maximum size of an array is 50\n");
	printf("Please enter the size of First array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&L1);
	ScanArray(Array_one,L1);

	printf("Please enter the size of Second array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&L2);
	ScanArray(Array_Two,L2);

	printf("The first array before the swapping: ");
	DisplayArray(Array_one,L1);

	printf("The Second array before the swapping: ");
	DisplayArray(Array_Two,L2);

	int MAX_SIZE = L1 > L2 ? L1 : L2 ;
	swap(Array_one,Array_Two,MAX_SIZE);
	printf("The first array after swapping: ");
	DisplayArray(Array_one,L2);
	printf("The second array after swapping: ");
	DisplayArray(Array_Two,L1);
	return 0 ;
}
/*This function to get the array elements from user*/
void ScanArray(int Array[],int size)
{
	int i ;
	for (i=0 ; i < size ; i++)
	{
		printf("%d) ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&Array[i]);
	}
}
/*This function to print the given array*/
void DisplayArray(int Array[],int size)
{
	int i ;
	for (i=0 ; i < size ; i++)
	{
		printf("%d ",Array[i]);
	}
	printf("\n");
}
/* swap function */
void swap(int F_Array[] , int S_Array[] , int MaxSize)
{
	int i ;
	int temp;
	for (i = 0 ; i < MaxSize ; i++)
	{
		temp = F_Array[i];
		F_Array[i] = S_Array[i];
		S_Array[i] = temp;
	}
}
