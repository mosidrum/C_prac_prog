#include <stdio.h>
#include <stdlib.h>

/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14,
* followed by a new line.
* Return: Always 0
*/
int main(void){
	int a;
	int b;
	int mul;

	printf("This program prints outs 12 multipliction times table \n\n");

	for (a = 1; a <= 12; a++)
	{
		for (b = 1; b <= 12; b++)
		{
			mul = a * b;
			printf("--%d ", mul);
		}
		printf("\n");

	}
	
return(0);
}
