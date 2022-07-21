#include <stdio.h>

char *_memset(char *s, char b, unsigned int *n);
int main()
{
	char x = 'G';
	char y = 'U';
	unsigned int z = 12;

	_memset(&x, y, &z);

	return 0;
}

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}