#include <stdio.h>

/*Write a program in C to calculate the sum of numbers from 1 to n using recursion.*/

int add_num(int);

int main()
{
	int x;
	int sum;

	printf("This program adds numbers from 1 to n\n");
	printf("---------------------------------------\n");
	printf("please input the number you wan to add:");
	scanf("%d", &x);

	sum = add_num(x);

	printf("\n The sum of 1 to %d is : %d\n\n", x, sum);
	return (0);
}

int add_num(int x)
{
	int result;

	if (x == 1)
	{
		return (1);
	} else
	{
		result = x + add_num(x - 1);
	}
	return(result); 

}