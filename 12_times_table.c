#include <stdio.h>
#include <stdlib.h>

/**
* this program prints 12 times multiplication table
* at the back of my exercise book
* when i was young in primary school
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
