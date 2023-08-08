/*
 * Stack.h
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#ifndef STACK_H_
#define STACK_H_

#define MaxSize 5
#define StackType unsigned int

typedef struct stack
{
	StackType Entry[MaxSize];
	unsigned int Top ;
}Stack;


void Stack_init(Stack *ptr_s);
unsigned int Stack_isFull(Stack *ptr_s);
unsigned int Stack_isEmpty(Stack *ptr_s);
unsigned int Stack_push(Stack *ptr_s, StackType item);
unsigned int Stack_pop(Stack *ptr_s, StackType *item);
unsigned int Stack_getTop(Stack *ptr_s, StackType *item);
unsigned int Stack_getSize(Stack *ptr_s);
void Stack_clear(Stack *ptr_s);


#endif /* STACK_H_ */
