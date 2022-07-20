#include <stdio.h>
#include <stdlib.h>

/**
*This program in C is to display the cube of the number upto given an integer
*/

int main(void){

	int i;
	int j;
	int g;
	int sum = 0;

	printf("Input the number of cubes \n\n");
	scanf("%d", &j);
	printf("\n");

	for (i = 1; i <= j; i++)
	{
		g = i * i * i;
		/*sum of all the cubes, its the same as saying sum = sum + g*/
		sum+=g;
		printf("The cube of  %d is :%d \n\n", i, g);
	}
	printf("this is the end of the program and the sum of all the cube is -- %d \n", sum);
	

	return (0);
}
