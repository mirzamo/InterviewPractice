// Given an array of positive and negative numbers. Sort it in a special way such that all the negatives are on the left and positives on the right side
// O(n) time and O(1) space
// source: careercup
// 11/30/15

void sort(int *a, int size)
{
	int pivot = 0, runner = 0;
	while (runner < size)
	{
		if (a[runner] < 0)
		{
			swap (a[runner], a[pivot]);
			pivot++;
		}
		 
		runner++;
	}
}