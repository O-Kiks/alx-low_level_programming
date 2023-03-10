#include "main.h"

/**
 * factorial - function that returns the factorial of a given integer
 *
 * @n: input integer
 *
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
