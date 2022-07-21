#include <stdio.h>

/*Write a program in C to print first 50 natural numbers using recursion. Go to the editor
Expected Output */

int first_50(int);

int main()
{
	printf("This is a program that prints the first 50 numbers \n");
	printf("--------------------------------------------------- \n");

	int x = 1;

	printf("the first 50 natural numbers are: \n");
	first_50(x);
	printf("\n\n");

	return 0;

}

int first_50( int x)
{
	if (x <= 50)
	{
		printf("%d \n", x);
		first_50(x+1);
	}
}
