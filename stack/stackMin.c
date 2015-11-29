// implement a stack with an additional function that gives the min of the stack
// 11/28/15
// source: cracking the code, problem: 3.2
// issue: uses a alot of memory. what if the min value happens to be the first element? A beeter solution would be to use a second stack to keep track of the min. 

NODE * pop(NODE **top);
NODE * pop(NODE **top);
int getMin(NODE *top);

typedef struct node NODE;

struct node 
{
	int data;
	struct node *next;
	int min;	
};

int main()
{
	NODE *top = NULL;
	push(top, 5);
}

NODE * push(NODE *top, int value)
{
	NODE *new;

	if(!(new = (NODE *) malloc sizeof(NODE)))
	{
		printf("allocation failure!");
		exit(1);
	}
	new->data = value;
	new->next = top;

	if(top == NULL)
		new->min = value;

	else
		new->min = min (top->min , data);	

	return new; 
}

NODE * pop(NODE **top)
{
	NODE * poped;

	poped = *top;
	poped->next = NULL;
	*top = (*top)->next;

	return poped;
}

int getMin(NODE *top)
{
	retrun top->min;
}