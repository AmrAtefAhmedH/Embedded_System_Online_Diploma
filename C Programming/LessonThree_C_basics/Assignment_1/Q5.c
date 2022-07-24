/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of G = %d",x);
}
