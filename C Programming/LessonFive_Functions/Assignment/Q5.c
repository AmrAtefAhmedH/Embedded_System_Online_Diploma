/*
 * main.c
 *
 *  Created on: August 17, 2022
 *      Author: Amr Atef
 */
#include "stdio.h"
int CheckName(char UserName[] , char Entered_Name[] );
int main()
{
	char Username[100] = "Amr Atef";
	char Entered_Name[100] ;
	printf("Enter user name: ");
	fflush(stdin);fflush(stdout);
	gets(Entered_Name);
	if (CheckName(Username,Entered_Name))
		printf("Correct user name , Welcome\n");
	else
		printf("Invalid user name\n");
	return 0 ;

}
int CheckName(char UserName[] , char Entered_Name[] )
{
	int i , flag = 1 ;
	for (i=0 ; UserName[i] != 0 || Entered_Name[i] != 0   ; i++)
	{
		if (UserName[i] != Entered_Name[i])
		{
			flag = 0 ;
			break;
		}
	}
	return flag;
}
