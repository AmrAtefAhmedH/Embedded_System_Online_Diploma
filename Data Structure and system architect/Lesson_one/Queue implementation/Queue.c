/*
 * Queue.c
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#include "Queue.h"

void Queue_init(Queue *ptr_Q)
{
	ptr_Q->size = 0 ;
	ptr_Q->front = 0 ;
	ptr_Q->rear = -1 ;
}

unsigned int Queue_isEmpty(Queue *ptr_Q)
{
	if (!ptr_Q->size)
		return 1 ;
	else
		return 0 ;
}
unsigned int Queue_isFull(Queue *ptr_Q)
{
	if (ptr_Q->size)
		return 1 ;
	else
		return 0 ;
}

void Queue_Append(Queue *ptr_Q,QueueType item)
{
	if(ptr_Q->rear == MaxSize - 1)
		ptr_Q->rear = 0 ;
	else
		ptr_Q->rear++;
	ptr_Q->entry[ptr_Q->rear] = item ;
	ptr_Q->size++;
}

void Queue_Dequeue(Queue *ptr_Q,QueueType *item)
{
	*item = ptr_Q->entry[ptr_Q->front];
	if(ptr_Q->front == MaxSize - 1)
		ptr_Q->front = 0 ;
	else
		ptr_Q->front++;

	ptr_Q->size--;
}

unsigned int Queue_getSize(Queue *ptr_Q)
{
	return ptr_Q->size;
}

void Queue_Clear(Queue *ptr_Q)
{
	ptr_Q->size = 0 ;
	ptr_Q->front = 0 ;
	ptr_Q->rear = -1 ;
}
