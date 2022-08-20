/*
 * main.c
 *
 *  Created on: Aug 19, 2022
 *      Author: user
 */
#include "stdio.h"
#include "string.h"
void Reverse_Word(char String[] , int N);
int main()
{
	char String[1000];
	int length;
	printf("Enter your string: ");
	fflush(stdin);fflush(stdout);
	gets(String);
	length = strlen(String);
	printf("Reverse words of your string: ");
	Reverse_Word(String,length);
}
void Reverse_Word(char String[] , int N)
{
	int Start , end , i , j ;
	end = N - 1 ;
	for(i=N-1 ; i>=0 ; i-- )
	{
		if(String[i]== ' ' || i == 0)
		{
			if(String[i]==' ')
				Start = i + 1 ;
			else
				Start = 0 ;
			for(j= Start ; j <= end  ; j++)
				printf("%c",String[j]);
			end = i - 1 ;
			printf(" ");
		}
	}
}
