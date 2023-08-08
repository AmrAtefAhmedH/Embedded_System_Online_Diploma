/*
 * Queue.h
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#define MaxSize 5
#define QueueType unsigned int

typedef struct
{
	unsigned int front; // the front of the queue
	unsigned int rear;  // the back of the queue
	unsigned int size;
	QueueType entry[MaxSize];
}Queue;

void Queue_init(Queue *ptr_Q);
unsigned int Queue_isEmpty(Queue *ptr_Q);
unsigned int Queue_isFull(Queue *ptr_Q);
void Queue_Append(Queue *ptr_Q,QueueType item);
void Queue_Dequeue(Queue *ptr_Q,QueueType *item);
unsigned int Queue_getSize(Queue *ptr_Q);
void Queue_Clear(Queue *ptr_Q);


#endif /* QUEUE_H_ */
