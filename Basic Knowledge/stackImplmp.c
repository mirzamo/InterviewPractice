#include <stack.c>

int main()
{
	NODE* stack = (NODE*) malloc (sizeof(NODE));
	stack = NULL;

	NODE* out;

	stack = push(stack, 8);
	stack = push(stack, 3);

	out = pop(&stack);
}