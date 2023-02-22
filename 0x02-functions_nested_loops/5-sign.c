#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: received integer
 *
 * Return: 1 if n is greater than 0; 0 if n equals 0
 * and -1 if n is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
