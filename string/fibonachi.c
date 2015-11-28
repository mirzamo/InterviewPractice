#include <stdio.h>

int fibonachi(int );

int main()
{

	return 0;
}

int fibonachi(int n)
{
	//if (n == 1 || n == 2)
	//	return 1;
	if (n <= 1)
		return n;

	return fibonachi (n - 1) + fibonachi (n - 2);
}
