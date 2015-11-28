#include <stdio.h>

void reverse(char *s);

int main()
{
	char s[100] = "Madam, I'm Adam";

	reverse(s);

	printf("%s\n", s);

	return 0;
}

// with indexes
/*
void reverse(char *s)
{

	int begin = 0, end = strlen(s) - 1;
	char temp;
	while(begin < end)
	{
		temp = s[end];
		s[end] = s[begin];
		s[begin] = temp;

		begin++;
		end--;
	} 
	return;
}
*/

//with pointers
void reverse(char *s)
{

	char *begin = s, *end = s + strlen(s) - 1;
	char temp;
	while(begin < end)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	} 
	return;
}