// Partition a link list such that all the nodes less than a given value are placed before it and the bigger ones after
// 11/28/15
** needs to be improved

NODE * partitionLL(NODE *head. int x)
{
	NODE *less, *more, current;

	current = head->next;

	if( !(less = (NODE *) malloc sizeof(NODE) || !(more = (NODE *) malloc sizeof(NODE))
	{
		printf("allocation error!");
		exit(1);
	}

	less->data = -1000;
	less->next = NULL;

	more->data = -1000;
	more->next = NULL;

	while(current)
	{
		if(current->data < x)
			insert(less, current->data);

		else
			inset (more, current data);

		current = current->next
	}

	// link less to more
	current = less->next;
	while(current->next)
	{
		current = current0->next;
	}

	current->next = more->next;
	more = NULL;
	free(more);
	current = head;
	head = less;
	less = NULL;
	free(less);

	
	while()

	return head;
}