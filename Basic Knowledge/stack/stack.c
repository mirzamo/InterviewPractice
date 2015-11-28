#include "stack.h"

NODE *push(NODE *stack, int data)
{
	// allocate memory for the new node
	NODE *newNode = (NODE *) malloc (sizeof (NODE));
	if(!newNode)
	{
		printf("... fail in memory allcation\n");
		exit(1);
	}

	newNode->data = data;
	newNode->next = stack;
	stack = newNode;

	return stack;
}

/* only pop; w/h returning the poped node
NODE* pop(NODE* stack)
{

	return stack;
}
*/

//pop and return the poped node
NODE *pop(NODE **stack)
{
	if(*stack == NULL)
		return NULL;

	NODE *poped;
	poped = *stack;
	*stack = (*stack)->next;
	poped->next = NULL;

	return poped;
}