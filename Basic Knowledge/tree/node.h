// Binary tree Node
typedef struct node NODE 
{
	int data;
	struct node *right;
	struct node *left;
};

//Depth_first Traversals
void in_order(NODE *tree);
void pre_order(NODE *tree);
void post_order(NODE *tree);
