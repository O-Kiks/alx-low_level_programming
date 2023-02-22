#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: received integer
 *
 * Return: 1 if n>0; 0 if n==0; -1 if n<0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar (45);
	}
	else if (n == 0)
	{
		return (0);
		putchar (48);
	}
	else
	{
		return (-1);
		putchar (45);
	}
}
