/*
 * Stack.c
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#include "Stack.h"

void Stack_init(Stack *ptr_s)
{
	/* (*ptr_s).Entry = 0 ; */
	ptr_s->Top = 0 ;
}

unsigned int Stack_isFull(Stack *ptr_s)
{
	if(ptr_s->Top ==  MaxSize /*Max size*/)
		return 1 ;
	else
		return 0 ;
}

unsigned int Stack_isEmpty(Stack *ptr_s)
{
	if (ptr_s->Top == 0)
		return 1 ;
	else
		return 0 ;
}

unsigned int Stack_push(Stack *ptr_s, unsigned int item)
{
	if(Stack_isFull(ptr_s))
		return 0 ;
	else
	{
		ptr_s->Entry[ptr_s->Top++] = item ;
		return 1 ;
	}
}

unsigned int Stack_pop(Stack *ptr_s, unsigned int *item)
{
	if(Stack_isEmpty(ptr_s))
		return 0 ;
	else
	{
		*item = ptr_s->Entry[--ptr_s->Top];
		return 1 ;
	}
}

unsigned int Stack_getTop(Stack *ptr_s, unsigned int *item)
{
	if(Stack_isEmpty(ptr_s))
		return 0 ;
	else
	{
		*item = ptr_s->Entry[(ptr_s->Top)-1];
		return 1 ;
	}
}

unsigned int Stack_getSize(Stack *ptr_s)
{
	return ptr_s->Top ;
}

void Stack_clear(Stack *ptr_s)
{
	ptr_s->Top = 0 ;
}
