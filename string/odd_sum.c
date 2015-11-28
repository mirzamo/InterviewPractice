#include <stdio.h>

int odd_sum(int);

int main()
{
	int n = 99;
	odd_sum(n);
	//printf("%d\n", odd_sum(n));
	return 0;
}

int odd_sum(int n)
{
	//int sum = 0;
	for (int i = 1; i <= n; i += 2)
		printf("%d\n", i);
	
	return 0;
}