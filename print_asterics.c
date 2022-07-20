#include <stdio.h>
#include <stdlib.h>

/**
*a program in C to display the pattern like right angle triangle using an asterisk with if and else if.
*/

int main(void)
{
	int a;
	

	for (a = 1; a <=4; a++)
	{
		if(a == 1)
		{
			printf("* \n");
		}
		else if (a == 2)
		{
			printf("**\n");
		}
		else if (a == 3)
		{
			printf("*** \n");
		}
		else if (a == 4)
		{
			printf("**** \n");
		}
		else 
		{
			printf("Put a valid number");
		}
	}
	return (0);
}
