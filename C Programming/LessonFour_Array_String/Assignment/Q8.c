/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#include "string.h"
int main()
{
	char String[100];
	int N,i,j;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",&String);
	N = strlen(String)+1;
	char rev_string[N];
	for(i=0 , j = N-1 ; i < strlen(String) ; i++ , j--)
	{
		rev_string[j-1] = String[i];
	}
	rev_string[N-1] = 0;
	printf("%s",rev_string);
	return 0;
}
