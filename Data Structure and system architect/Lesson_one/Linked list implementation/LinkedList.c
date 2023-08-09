/*
 * LinkedList.c
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#include "stdlib.h"
#include "stdio.h"
#include "LinkedList.h"

int Linked_isEmpty(PtrToNode P)
{
	if(P == NULL)
		return 1 ;
	else
		return 0 ;
}


void Linked_insertFirst(PtrToNode* P,int Data)
{
	PtrToNode newNode = (PtrToNode)malloc(sizeof(Node)); // create node
	if(newNode != NULL) // is space available?
	{
		newNode->data = Data ;
		if(Linked_isEmpty(*P))
		{
			*P = newNode;
			newNode->nextElement = NULL;
		}
		else
		{
			newNode->nextElement = *P;
			*P = newNode ;
		}
	}
}


void Linked_insertBack(PtrToNode* P,int Data)
{
	PtrToNode newNode = (PtrToNode)malloc(sizeof(Node));
	PtrToNode currentNode = *P ; // point to first node in the list
	if(newNode != NULL) // is space available?
	{
		newNode->data = Data;
		newNode->nextElement = NULL ; // the list element in the list in the end of func.
		if(Linked_isEmpty(currentNode))
			*P = newNode ;
		else
		{
			while(currentNode->nextElement != NULL) // to get the last element in the list
				currentNode = currentNode->nextElement ;
			currentNode->nextElement = newNode ;
		}
	}
}

void Linked_printList(PtrToNode currentPtr)
{
	if(Linked_isEmpty(currentPtr))
		printf("The list in empty");
	else
	{
		printf("The list is:\n");
		while(currentPtr != NULL)
		{
			printf(" %d -->",currentPtr->data);
			currentPtr = currentPtr->nextElement;
		}
		printf("NULL\n");
	}
}

void Linked_ClearList(PtrToNode* P)
{
	PtrToNode currentNode = *P ;
	PtrToNode nextNode = NULL;
	*P = NULL;
	while(currentNode != NULL)
	{
		nextNode = currentNode->nextElement;
		free(currentNode);
		currentNode = nextNode ;
	}
}

void Linked_Delete(PtrToNode* P, int value)
{
	PtrToNode currentNode = *P ;
	PtrToNode prevNode = NULL ;
	if(!Linked_isEmpty(*P))
	{
		while(currentNode->data != value)
		{
			prevNode = currentNode;
			currentNode = currentNode->nextElement;
		}
		prevNode->nextElement = currentNode->nextElement;
		free(currentNode);
	}

}

void Linked_insertBetween(PtrToNode* P ,int Data ,int value_one , int value_two)
{
	PtrToNode newNode = (PtrToNode)malloc(sizeof(Node));
	if(newNode != NULL && ! Linked_isEmpty(*P)) // is space available? and linked is not empty
	{
		PtrToNode currentNode  = (*P)->nextElement ;
		PtrToNode prevNode = *P ;
		newNode->data = Data ;
		while(currentNode != NULL)
		{
			if(currentNode->data == value_two && prevNode->data == value_one)
			{
				newNode->nextElement = prevNode->nextElement;
				prevNode->nextElement = newNode;
				return ;
			}
			prevNode = currentNode;
			currentNode = currentNode->nextElement;
		}
	}

}

void Linked_getNth(PtrToNode currentNode,int n, int* ReturnData)
{
	int count = 0 ;
	while(currentNode != NULL)
	{
		if(count == n)
			*ReturnData = currentNode->data ;
		count++;
		currentNode = currentNode->nextElement;
	}
}


int Linked_SizeIterative(PtrToNode currentNode)
{
	int count = 0 ;
	while(currentNode != NULL)
	{
		count++;
		currentNode = currentNode->nextElement ;
	}
	return count;
}


int Linked_sizeRecursive(PtrToNode currentNode)
{
	if (currentNode == NULL)
		return 0 ;
	else
		return 1 +  Linked_sizeRecursive(currentNode->nextElement);
}

int Linked_middelElement(PtrToNode Head)
{
	PtrToNode tempPtr = Head;
	if(!Linked_isEmpty(Head))
	{
		int NoOfElement = 0 , middle ;
		while(tempPtr != NULL) // get number of element in the list
		{
			NoOfElement++;
			tempPtr = tempPtr->nextElement;
		}
		tempPtr = Head;
		middle = NoOfElement / 2 ;
		while(middle != 0)
		{
			middle--;
			tempPtr = tempPtr->nextElement ;
		}
	}
	return tempPtr->data;
}
