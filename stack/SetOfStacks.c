// SetOfStacks
// surce: cracking the code, problem 3.3
// 11/28/15

#include <stdio.h>

#define STACK_CAPACITY

NODE * push (NODE *top, int value);
NOEE * pop (NODE **top);


typedef struct node NODE;
typedef struct stackset StackSet;


struct node 
{
	int data;
	struct node *next;

};

struct stackset
{
	struct node *top;
	int count;
};


int main()
{	
	//initilaze the stack set
	StackSet *stack;
	stack->count = 0;
	stack->top = NULL;

	return 0;	
}


NODE * push (StackSet *stack, int value)
{
	
	NODE *new;

	if(!(new = (NODE *) malloc sizeof(NODE)))
	{
		printf("allocation failure");
		exit(1);
	}

	new->data = value;
	new->next = stack->top;
	stack->top = new;
	stack->count += 1;

}

NOEE * pop (NODE **top)
{}