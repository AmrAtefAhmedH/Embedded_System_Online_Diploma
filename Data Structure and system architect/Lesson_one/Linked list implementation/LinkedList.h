/*
 * LinkedList.h
 *
 *  Created on: Aug 8, 2023
 *      Author: user
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct node {
	int data;
	struct node *nextElement;
};

typedef struct node Node;
typedef Node* PtrToNode;
/* ============= Hint =============
 *
 * PtrToNode x ----> Node* x ---> struct node* x
 * pointer to node
 *
 * ============= Hint =============
 *
 * PtrToNode* x ---> Node** x ---> struct node** x
 * Pointer to pointer to node
 *
 */

/* APIs */

int Linked_isEmpty(PtrToNode );
void Linked_insertFirst(PtrToNode* ,int );
void Linked_insertBack(PtrToNode* ,int );
void Linked_printList(PtrToNode );
void Linked_Delete(PtrToNode* , int);
void Linked_ClearList(PtrToNode*);
void Linked_insertBetween(PtrToNode* ,int , int , int);
void Linked_getNth(PtrToNode ,int, int *);
int Linked_SizeIterative(PtrToNode); /*Iterative*/
int Linked_sizeRecursive(PtrToNode);  /*PtrToNode*/
int Linked_middelElement(PtrToNode);


#endif /* LINKEDLIST_H_ */
