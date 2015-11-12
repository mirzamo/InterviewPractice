
/*typedef struct node
{
	int data;
	struct node* next;
}NODE;
*/

typedef struct node NODE;
struct node
{
	int data;
	struct node* next;
};

// functions
NODE* push(NODE*, int);
NODE* pop(NODE**);
