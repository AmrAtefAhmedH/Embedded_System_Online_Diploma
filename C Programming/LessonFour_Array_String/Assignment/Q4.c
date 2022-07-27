/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int i , N , Location , Element;
	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);
	int array[N];
	int inserted_array[N+1];
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
	printf("\nEnter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Element);
	printf("Enter the Location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Location);
	/* insert the element */
	for(i=0 ; i<N+1 ; i++)
	{
		if(i<Location-1)
			inserted_array[i] = array[i];
		else if (i == Location-1)
			inserted_array[i] = Element;
		else
			inserted_array[i] = array[i-1];
	}
	/* display the array after insert the element */
	for (i=0 ; i<N+1 ; i++)
			printf("%d\t",inserted_array[i]);
	return 0 ;

}
