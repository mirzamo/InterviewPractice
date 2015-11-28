#include <stdio.h>

int findMax(int *, int);

int main()
{
	int array[7] = {1,5,3,8,3,9,4};
	int max = findMax(array, 7);
	printf("%d\n", max);
	return 0;
}

int findMax(int *a, int size)
{
	int max = a[0];
	for(int i = 1; i < size; i++)
		if(a[i] > max)
			max = a[i];
	return max;
}