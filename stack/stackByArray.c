// implement 3 stacks using a single array
// source: Cracking the code, problem 3.1
// Fixed Sizes: the issue of this model is that one stack may overflow while the others are empty
// exeptations that need to be taken care of: if the size of array is not divisible by the number of stacks

#define Number_of_Stacks 3
#define Array_Size 9
#define Stack_Size

// array_size = Number_of_stacks * Stack_Size

int array[Array_Size];
int tops[Number_of_Stacks] = {-1, -1, -1};		// initially all the stacks are empty

// stacks are numbered from 0 .. n
int push(int stackNumber, int value)
{
	if (tops[stackNumber] >= Stack_Size )
		return 0;

	else 
		array[ -stackNumber * Stack_Size + tops[stackNumber]]
}