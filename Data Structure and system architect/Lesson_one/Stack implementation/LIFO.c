/*
 * LIFO.c
 *
 *  Created on: Aug 7, 2023
 *      Author: user
 */
#include "stdio.h"
#include "LIFO.h"

LIFO_Status isNotVaild(LIFO_buf_t* Lifo)
{
	if (!Lifo-> base || !Lifo->head ) // if base or head equal null
		return LIFO_Null ;
	else
		return LIFO_NO_ERROR;
}

LIFO_Status isFull(LIFO_buf_t* Lifo)
{
	if(Lifo->count == Lifo->lenght)
		return LIFO_FULL ;
	else
		return LIFO_NO_ERROR ;
}

LIFO_Status isEmpty(LIFO_buf_t* Lifo)
{
	if(Lifo->count == 0)
		return LIFO_EMPTY ;
	else
		return LIFO_NO_ERROR ;
}

LIFO_Status LIFO_Create(LIFO_buf_t* Lifo,unsigned int* array,unsigned int lenght)
{
	if(array == NULL || lenght == 0)
		return LIFO_Null;
	else
	{
		Lifo->base = array;
		Lifo->head = array;
		Lifo->lenght = lenght;
		Lifo->count = 0;
		return LIFO_NO_ERROR;
	}
}

LIFO_Status LIFO_Add_item(LIFO_buf_t* Lifo,unsigned int item)
{
	if(isFull(Lifo))
		return LIFO_FULL ;
	else if (isNotVaild(Lifo))
		return LIFO_Null;
	else
	{
		*(Lifo->head) = item;
		Lifo->head++;
		Lifo->count++;
		return LIFO_NO_ERROR;
	}
}

LIFO_Status LIFO_get_item(LIFO_buf_t* Lifo,unsigned int* item)
{
	if(isEmpty(Lifo))
		return LIFO_EMPTY;
	else if( isNotVaild(Lifo) )
		return LIFO_Null ;
	else
	{
		Lifo->head--;
		*item = *(Lifo->head);
		Lifo->count--;
		return LIFO_NO_ERROR;
	}

}
