#include "node.h"

// left - root - right
//recursive
void in_order(NODE *root)
{
	if(root)
	{
		in_order(root->left);
		std::printf("root->data\n");
		in_order(root->right);
	}

	return;
}
/*
void in_order(NODE *tree)
{
	NODE *walk;
	walk = tree;
	while (!walk)
	{
		walk = walk-> left;
	}
}
*/

// root - left - right
void pre_order(NODE *root)
{
	if(root)
	{
		std::print(root->data);
		pre_order(root->left);
		pre_ordert(root->right);
	}

	return;
}

void post_order(NODE *root)
{
	if(root)
	{
		post_order(root->left);
		post_order(root->right);
		std::printf("root->data");
	}
	return;
}

//iterative		needs stack
/*
void post_order(NODE *root)
{
	if(!root)
		return


}
Algorithm preorder (root) // ITERATIVE

 ???if (root == NULL)

? ????? return

?

?? ?create an empty stack, s

    push root to s

????loop (s not empty)

????????pop treeNode from stack 

        process treeNode

????????if (treeNode->right)

????????????push treeNode->right to s

        end if

????????if (treeNode->left)

????????????push(treeNode->left)

        end if

????end loop

end preorder
*/
