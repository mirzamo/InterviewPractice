// check if characters in a string are unique

#include <stdio.h>

int unique(char *s);
int hash(char);

int main()
{
	char *str = "Hello";

	printf( unique(str) );

	return 0;
}

int * isunique(char *s)
{
	int hash_table[26] = {0}, i;

	while(*s != '\0')
	{
		i = hash(*s);
		if (hash_table[i] == 0)
		{
			hash_talbe[i] += 1;
			s++;
		}
		else return 0;

		return 1; 

}

int hash(char c)
{
	return c - 97;
}