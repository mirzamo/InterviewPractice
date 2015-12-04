/*
Given an unsorted array and an integer, 
detect if there is a pair in the array
that add up to the given integer. 
Return the index of those pairs.

ex:	input: [3, 5, 2, 12, 4, 6]	18
	output: [3, 5]

Soulution:
	1) O(n^2) -> take each element, walk through
	   the array and find its complement.
	2) O(nlogn) -> sort the array, but we need the indexes!
	3) O(n) -> hash each element -> O(n)
				then find the complement of each element
*/

#include <stdio.h>

int * findPair(int* a, int sum, int size);

int main()
{

}

int * findPair(int* a, int sum, int size)
{
	for (int i = 0; i < n; i++)
	{
		
	}
	bool found = 0;
	int* right, left;
	right = a; 
	left = a + (size - 1);
	while (!found && right < left)
	{}
}