#include <stdio.h>
#include <stdlib.h>

/**
*Write a program in C to display n terms of natural number and their sum
*/

int main(void){
	int a, b;
	int sum = 0;

	printf("This program finds the nth term and calculate its sum");
	printf("please input a number greater than 1 \n");

	scanf("%d", &b);
	for (a = 1; a <= b; a++)
	{
		printf("%d -", a);
		sum+=a; 
		/* this is the same as sum = sum + a */
	}
	printf("\nThe sum of the nth term of %d is %d \n", b , sum);

return (0);
}
