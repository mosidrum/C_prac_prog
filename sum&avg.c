#include <stdio.h>
#include <stdlib.h>

/**
*This program in C is to read 10 numbers from keyboard and find their sum and average.
*/

int main(void){

	int a, b;
	int sum = 0;
	float avg;

	printf("This progra will add 10 numbers andfind their average \n\n");

	for (a =1; a <= 10;a++)
	{
		printf("input number-%d :", a);
		scanf("%d", &b);
		sum = sum + b;
		avg = sum / 10; 
	}
	printf("the sum of the numbers is :%d \n", sum);
	printf("the average is :%f", avg);

	return (0);
}
