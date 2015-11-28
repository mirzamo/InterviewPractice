//Given a binary tree with integer values at each node, verify that it is a binary search tree. 

/*
1) Do In-Order Traversal of the given tree and store the result in a temp array.
3) Check if the temp array is sorted in ascending order, if it is, then the tree is BST.

Time Complexity: O(n)

We can avoid the use of Auxiliary Array. While doing In-Order traversal, we can keep track of previously visited node. If the value of the currently visited node is less than the previous value, then tree is not BST. Thanks to ygos for this space optimization
*/ 

//tree's node structure
typedef struct node NODE
struct node
{
	int data;
	struct node *right;
	struct node *left;
};

int inBST (NODE *root)
{
	NODE *prev = NULL;

	if(root == NULL)
		return 1;

	if (!isBST (root->left))
		return 0;

	if (prev != NULL && prev->data > root->data)
		return 0;

	prev = root;

	isBST(root->right);

	return 1;


}

/* doesnt work! the root needs to be bigger than the max of left sub tree
int isBST (NODE *root)
{
	// tree empty
	if(root == NULL)
		return 1;

	if (root->left != NULL && root->data < root->left->data)
		return 0;

	else if (root->right != NULL && root->data > root->right->data)
		return 0;

	else isBST (root->left);
	isBST(root->right);

	return 

}
*/

