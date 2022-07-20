#include <stdio.h>

/* This program finds factorial with pointers*/

void findF(int a, int *b);

int main()
{
	int x;
	int y;

	printf("This program findsthe factorial of a user input \n");
	printf("------------------------------------------------- \n");
	printf("Please input a number : ");
	scanf("%d", &x);

	findF(x, &y);
	printf("The factorial od %d is : %d \n", x,y);
	return 0;
}

void findF(int a, int *b)
{
	int i;

	*b = 1;

	for (i = 1; i <= a; i++)
	{
		*b = *b * i;
	}
}
