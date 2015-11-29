// remove suplicates from an unsorted linked list

// Assumption: the link has sentinel node

#include <stdio.h>

typedef struct node NODE;

struct node
{
	int data;
	struct node *next;
}

void remove_dup(NODE *);

int main()
{
	
	return 0;
}

void remove_dup(NODE *head)
{
	NODE walk = head->next;
	int hash_talbe[10] = {0};
	int index;

	while(!walk)
	{
		index = hash(walk->data);
			if( hash_table[index] != 0)
				hash_table[index] = 1;

			else

			// else delete	
			else
				delete(head, walk->data, hash_table[index] - 1);

	}
}

void remove_dup(NODE *head, int target, int count)
{
	NODE *current = head->next;
	NODE *previous = head;

	while (count)
	{
		if (current->data == target)

		count--;
	}

}