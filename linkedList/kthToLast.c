// find the k'th to the end node in a linked list

#inlcude<stdio.h>

NODE * kthInList(NODE *head, int k)
{
	NODE *left, *right;
	int i;

	left = right = head->next;

	if(!left)
		return NULL;

	for (i = 0; i < k; i++)
	{
		right = right->next;
		if(!right)
			return NULL;
	}

	while (right->next)
	{
		right = right->next;
		left = left->next;
	}

	return left;
}