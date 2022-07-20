#include <stdio.h>
#include <stdlib.h>

/**
*Write a program in C to display n odd terms of number and their sum
*/

int main(void){
	int a, b, c;
	int sum = 0;

	printf("This program finds the odd nth term and calculate its sum");
	printf("please input a number greater than 1 \n");

	scanf("%d", &b);
	printf("\n");
	for (a = 1; a <= b; a++)
	{
		if (a % 2 == 1)
		{
			
			printf("%d", a);
		}
		else if (a % 2 == 0)
		{
			printf("\n");
		}
		
		c = a;
		sum = sum + c; 
	}
	printf("\nThe sum of the odd nth term of %d is %d \n", b , sum);

return (0);
}
