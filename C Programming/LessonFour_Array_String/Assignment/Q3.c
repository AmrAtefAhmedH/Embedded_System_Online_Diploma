/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	int Row , Column , i ,j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&Row ,&Column);
	int array[Row][Column];
	int T_array [Column][Row];
	/* Take the array from the user */
	for (i=0 ; i<Row ; i++)
	{
		for(j=0 ; j<Column ; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&(array[i][j]));
		}
	}
	/* display the original matrix */
	printf("Entered Matrix:\n");
	for (i=0 ; i<Row ; i++)
	{
		for(j=0 ; j<Column ; j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	/* Transpose of a matrix */
	for (i=0 ; i<Column ; i++)
	{
		for(j=0 ; j<Row ; j++)
		{
			T_array[i][j] = array[j][i];
		}
	}
	/* display the Transpose of the matrix */
	printf("Transpose of the Matrix:\n");
	for (i=0 ; i<Column ; i++)
	{
		for(j=0 ; j<Row ; j++)
		{
			printf("%d\t",T_array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
