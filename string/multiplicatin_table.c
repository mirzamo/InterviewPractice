// multiplication table of 12x12
#include <stdio.h>

void mult(int n);

int main()
{
	mult(12);
	return 0;

}

void mult(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("%d\t", i * j);
		printf("\n");
	}
}
