// two numbers are stroed in a lineked list in a reverse order. Add them up and return the sum as a linked list

#include <stdio.h>

NODE * init();
NODE * sum (NODE *n1, NODE *n2);


typedef struct node NODE;

struct node
{
	int digit;
	struct node *next;	
};

NODE * sum (NODE *, NODE *);

int main()
{
	NODE *n1, *n2, *n3;
	nn1 = init();
	n2 = init();

	n3 = sum(n1, n2); 
}

NODE * init()
{
	NODE *head;
		if( !(head = (NODE *) malloc sizeof(NODE))
		{
			printf("allocation failure!");
			exit(1);
		}
	head->digit = -1;
	head->next = NULL;

	return head;
}

NODE * sum (NODE *n1, NODE *n2)
{
	NODE *n3;
	int carry = 0, sum = 0;

	n3 = init();

	// if( !(n3 = (NODE *) malloc sizeof(NODE))
	// 	{
	// 		printf("allocation failure!");
	// 		exit(1);
	// 	}
	// n3->digit = -1;
	// n3->next = NULL;

	// skip sentinal node
	n1 = n1->next;
	n2 = n2->next;
	n3 = n3->next;

	if(!n1 && !n2)
		return NULL;


	while(n1 && n2)
	{
		sum = carry + n1->data + n2->data;
		insert(n3,  sum % 10);
		carry = sum / 10; 

		n1 = n1->next;
		n2 = n2->next;
	}

	if(n1)

	n3->next = NULL;

}

void insert(NODE *head, value)
{
	head = head->next;

	while (head->next)
		head = head->next;

	head = (NODE *) malloc sizeof(NODE);

	head->next = NULL;
	head->digit = value;

	return;
}