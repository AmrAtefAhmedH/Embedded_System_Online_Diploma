/*
 * LIFO.h
 *
 *  Created on: Aug 7, 2023
 *      Author: user
 */

#ifndef LIFO_H_
#define LIFO_H_
 /* Type definitions */
typedef struct
{
	unsigned int lenght; 	// the length of array
	unsigned int count;		// the number of elment in stack
	unsigned int *base;
	unsigned int *head;
}LIFO_buf_t;

typedef enum
{
	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_Null
}LIFO_Status;

/* APIs */

LIFO_Status isNotVaild(LIFO_buf_t* Lifo);
LIFO_Status isFull(LIFO_buf_t* Lifo);
LIFO_Status isEmpty(LIFO_buf_t* Lifo);
LIFO_Status LIFO_Create(LIFO_buf_t* Lifo,unsigned int* array,unsigned int lenght);
LIFO_Status LIFO_Add_item(LIFO_buf_t* Lifo,unsigned int item);
LIFO_Status LIFO_get_item(LIFO_buf_t* Lifo,unsigned int* item);

#endif /* LIFO_H_ */
