// delete c anode in the middle of a singly linked list, given only acces to that node
// source: cracking the code, page 187

 int deleteMiddle(NODE *middle)
 {
 	Node *temp;

 	if(!middle || middle->next == NULL)
 		return 0;

 	middle->data = middle->nect->data;
 	middle-next = temp;
 	middle->next = middle->next->next;
 	temp->next = NULL;
 	free (temp);

 	return 1;

 }

