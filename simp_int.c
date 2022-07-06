/* This programe recieves principal rate and time to calculate simple interest*/
#include <stdio.h>
int main()
{
	int prin, time;
	float rate, si;

	printf ("Enter values of pricipal, time and rate:");
	scanf("%d%d%f", &prin, &time, &rate);
	si = prin * time * rate / 100;
	printf("Simple interest is : %f", si);
}