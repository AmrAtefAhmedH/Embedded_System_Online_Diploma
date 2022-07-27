/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	float x[2][2];
	float y[2][2];
	float sum[2][2];
	int Row , Column ;
	printf("Enter the elements of 1st matrix\n");
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			printf("Enter a%d%d: ",Row+1,Column+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&(x[Row][Column]));
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			printf("Enter a%d%d: ",Row+1,Column+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&(y[Row][Column]));
		}
	}
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			sum[Row][Column] = x[Row][Column] + y[Row][Column] ;
		}
	}
	printf("Sum of Matrix:\n");
	for (Row=0 ; Row < 2 ; Row++)
		{
			for(Column=0 ; Column < 2 ; Column++)
			{
				printf("%.1f\t",sum[Row][Column]);
			}
			printf("\n");
		}
	return 0 ;
}
