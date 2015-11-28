#include <queue.c>

int main()
{
	NODE *front, *rear;
	front = NULL;
	rear = NULL;
	NODE *out;

	enqueue(&front, &rear, 7);
	enqueue(&front, &rear, 9);

	out = dequeue(&front, &rear);
	if (out)
	{
		printf("Front node the queue is %d\n", out->data);
	}
	else printf("Empty queue!\n");

	out = dequeue(&front, &rear);
	if (out)
	{
		printf("Front node the queue is %d\n", out->data);
	}
	else printf("Empty queue!\n");

out = dequeue(&front, &rear);
	if (out)
	{
		printf("Front node the queue is %d\n", out->data);
	}
	else printf("Empty queue!\n");

	return 0;
}