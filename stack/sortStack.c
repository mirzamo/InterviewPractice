// Sort a stack using only two stacks (only the original stack)
// source: cracking the code, problkem 3.6
// 11/29/15

typedef struct node NODE;

struct node
{
	int data;
	struct node *next;
};

//methods: 
// pop ()
// push ()
// peek ()
// isEmpty ()


 NODE * sort (NODE *s1)
 {
 	NODE * temp;
 	NODE * s2;

 	s2 = NULL;

 	while(!isEmpty(s1))
 	{
	 	temp = pop (s1);

	 	while(!isEmpty(s2) && peek(s2) > tmp)
	 	{
	 		push(s1, pop(s2));
	 	}
	 	push(s2, tmp);
 	}
 	return s2;

 }