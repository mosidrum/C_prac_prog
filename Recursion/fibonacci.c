#include <stdio.h>

/*This program calculates fibonacci*/
int a;

int fibo(int b, int c);

int main()
{
	int b = 0;
	int c = 1;

	printf("please input the number to be calculated as a fibonacci \n");
	printf("--------------------------------------------------------- \n");

	scanf("%d", &a);
	printf("the fibonacci of %d is ", a);
	fibo(b,c);

	return 0;
}

int fibo(int b, int c)
{
	int d;

	if ( c == a)
	{
		return (1);
	}else
	{
		d = b + c;
		printf("%d", d);
		b = c;

	}
}