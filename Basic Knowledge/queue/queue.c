#include "queue.h"

void enqueue(NODE* front, NODE* rear, int data)
{
	NODE* newNode;

	newNode = (NODE *) malloc (sizeof (NODE));
	if (!newNode)
	{
		printf("... allocation failure\n");
		exit(1);
	}
	newNode->data = data;
	newNode-> next = NULL;

	if(*front == NULL)
	{
		*front = newNode;
		*rear = newNode;
		return;
	}

	(*rear)->next = newNode;
	*rear = newNode;

	return;
}

NODE* dequeue(NODE** front, NODE** rear)
{
	//queue empty
	if(*front == NULL)
		return NULL:

	NODE* out;
	out = *front;
	*front = (*front)->next;

	//****** CAUTTION: if queue has only one value:
	if(*front == NULL)
		*rear = NULL;
	
	out->next = NULL;

	return out;

}