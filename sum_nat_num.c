#include <stdio.h>
#include <stdlib.h>

/**
*this program print first 10 natural number
*/

int main(void)
{
	int x;
	int sum = 0;

	for (x = 1; x <= 10; x++)
	{
		sum = sum + x;

	}
	printf("The sum of the number is %d \n", sum);

	return (0);
}