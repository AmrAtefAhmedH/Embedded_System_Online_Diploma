/*
 * main.c
 *
 *  Created on: August 15, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
#include "string.h"
void ReverseSentence(char String[] , int i);/* Declaration on the function */
int main()
{
	char sentence[1000];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	ReverseSentence(sentence,strlen(sentence));
}
void ReverseSentence(char String[] , int i)
{
	if (i != 0 )
	{
		printf("%c",String[--i]);
		ReverseSentence(String,i);
	}
}
