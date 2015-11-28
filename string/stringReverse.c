// reverse a string

#include <stdio.h>

void reverse (char *str);

int main()
{
	char *str = "Hello";

	printf( unique(str) );

	return 0;
}

void reverse (char *str)
{
	char c;
	char *end = str, left = str;

	while(*end != '\0')
		end++;
	end--;

	while (left < end)
	{
		c = *str;
		*left = *end;
		*end = c;

		end--;
		left++;
	}
	return;
}
