#include <stack.c>

int main()
{
	NODE *stack = NULL;
	NODE* top;

	stack = push(stack, 8);
	stack = push(stack, 3);

	top = pop(&stack);
	if (top)
	{
		printf("Top node of stack is: %d\n", top->data);
	}
	else printf("Empty stack!\n");

	top = pop(&stack);
	if (top)
	{
		printf("Top node of stack is: %d\n", top->data);
	}
	else printf("Empty stack!\n");

	top = pop(&stack);
	if (top)
	{
		printf("Top node of stack is: %d\n", top->data);
	}
	else printf("Empty stack!\n");

	return 0;
}