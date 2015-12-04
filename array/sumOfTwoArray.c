#include<stdio.h>

#define c_size 10

int * sum (int *, int*,int, int);

int main()
{
	int i;
	int a[4] = {1,2,3,4}, b[3] = {4,9,3}, c[c_size] = {0};
	int a_size = sizeof(a) / sizeof(a[0]), b_size = sizeof(b) / sizeof(b[0]);

	c = sum(a, b, a_size, b_size);

	for(i = 0; i < c_size; i++)
		printf("%d\n", c[i]);

	return 0;
}

int * sum (int *a, int *b, int a_size, int b_size)
{
	int c[c_size] = {0}, i, sum = 0;

	if(a_size > b_size)
	{
		for (i = 0; i < a_size; i++)
			c[c_size - 1 - i] = a[a_size - 1 - i];

		for( i = 0; i < b_size; i++)
		{
			sum += (c[c_size - 1 - i] + b[b_size - 1 - i]); 

				c[c_size - 1 - i] = sum % 10;
				sum = sum / 10;
			
		}

	}
	else
	{
		for (i = 0; i < a_size; i++)
			c[c_size - 1 - i] = a[a_size - 1 - i];

		for( i = 0; i < b_size; i++)
		{
			sum += (c[c_size - 1 - i] + b[b_size - 1 - i]); 

				c[c_size - 1 - i] = sum % 10;
				sum = sum / 10; 
	}

	//for (i = 0; i < sizeof(a); i++)

// for(i = 0; i < c_size; i++)
// 	if(c[i] )
// 		printf("%d ", c[i]);
	return c;

}