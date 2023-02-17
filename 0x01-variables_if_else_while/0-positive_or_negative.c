#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description: a program to return statements for assigned random variables
 * Return (0) if successful*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		{
			printf("The number is positive");
		}
		else
		{
			if (n==0)
			{
				printf("The number is zero");
			}
			else
			{
				printf("The number is negative\n");
			}
		}
	return (0);
}
