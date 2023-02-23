#include <stdio.h>

/**
 * main - entry point
 *
 * description: print numbers 1 to 100 and play with multiples of 3 and 5
 *
 * Return: 0 Always
 */

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf ("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf ("FizzBuzz ");
		}
		else
		{
			printf ("%d ", i);
		}
	}
	putchar ('\n');
	return (0);
}