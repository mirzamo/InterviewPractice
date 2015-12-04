#include <node.c>

NODE * bst_search (NODE *root, int target)
{
	if (root == NULL)
		return NULL;

	if (root->data == target)
		return root;
	if (root->data < target)
		bst_search(root->right, target);
	else 
		bst_search(root->left, target);
}

/*
NODE * insert (NODE *root, int entry)
{
	NODE *newNode = (NODE *) malloc (sizeof (NODE));
	if (!newNode)
		std::printf(".. Memory allocation failure in insert!\n");
	newNode->data = target;
	newNode->right = NULL;
	newNode->left = NULL;

	if (root == NULL)
		root = newNode;
	else if(root->data )


	return root;
}
*/

/* Recursive insert
	for word (char array) data
*/
/*
void insert(NODE **tree, char *input)
{
	int compare;

	// tree empty
	if ((*root) == NULL)
	{
		if((*root = (NODE *) malloc sizeof(NODE)) == NULL)
			{
				printf("allocatoin error");
				exit(1);
			}
		(*root)->right = (*root->left) = NULL;

		if(((*root)->word = (char *) malloc sizeof(strlen(input) + 1) == NULL)
		{
			printf("allocation  error\n", );
			exit(1);
		}

		strcpy((*root)->word, input);
		return;
	}

	//tree not empty
	compare = strcmp((*root)->word , input);
	if(compare > 0)
		insert((*root)->left, input);
	else if (compare < 0)
		insert((*root)->right, input);
	else
		printf("The input is alreadt in the tree\n");

	return;

}
*/

/* Recursive insert
	for word (char array) data
*/
		/*
NODE * (NODE *root, char *input)
{
	NODE **walker = &root;
	int cmp;

	while (*walker)
	{
		cmp = strcmp(input, (*walker)->word);

		if(cmp > 0)
			*walker = (*walker)->right;
		if(cmp < 0)
			*walker = (*walker)->left;
		else
			{
				printf("the value already exist in the tree\n");
				exit(2);
			}	

	}

	(*walker) = (NODE *) malloc sizeof(NODE);
	(*walker)->right = (*walker)->left;
	(*walker)->word = (char *) malloc sizeof(strlen(input) + 1);
	strcpy((*walker)->word, input);
	
	return root;
}
*/

// binary search
// Recursive
NODE * BST_search(NODE *root, char *input)
{
	int compare;

	if(!root)
		return NULL;

	compare = strcmp(input, root->word);
	if(compare > 0)
		BST_search(root->right, input)
	else if(compare < 0)
		BST_search(root->left, input)
	else
		return root;
}

// binary search
// Iterative
/*
NODE * BST_search(NODE *root, char *input)
{
	int compare;
	NODE * walker = root;
	compare = strcmp(input, root->word);

	while(walker)
	{
		compare = strcmp(input, walker->word);
		if(compare > 0)
			walker = walker->right;
		else if(compare < 0)
			walker = walker->left;
		else
			return walker
	}
	return NULL;
}
*/


//Traversal / preorder
// recursive
void pre_order(NODE *root)
{
	if (!root)
		return;
	pre_order(root->left);
	printf("%s\n", root->word);		//process
	pre_order(root->right);

}


// RECURSIVE Insert BST

algorithm addBST( root, newNode )

                                         

   if( root is NULL )

      root = newNode

   else

      if( newNode->data < root->data )

          addBst( root->left, newNode )

      else

          addBst( root->right, newNode ) 

      end if

   end if

end addBST