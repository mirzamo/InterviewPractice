typedef struct node NODE;
struct node
{
	int 	data;
	struct  node *next;
};

void enqueue(NODE **front, NODE **rear, int data);
//return the out node
NODE *dequeue(NODE **, NODE **);