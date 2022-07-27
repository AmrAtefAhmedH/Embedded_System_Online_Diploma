/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int i , N , Element;
	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);
	int array[N];
	/* take the elements from the user */
	for(i=0 ; i<N ; i++)
	{
		printf("Enter element no.%d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&array[i]);
	}
	/* display the array */
	for (i=0 ; i<N ; i++)
		printf("%d\t",array[i]);
	printf("\nEnter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Element);
	/* search */
	for (i=0 ; i<N ; i++)
	{
		if (Element==array[i])
			break;
	}
	printf("Number found at the location %d ",i+1);
	return 0 ;
}
