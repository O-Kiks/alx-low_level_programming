#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: integer value received
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	

	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-(n));
	}
	_putchar('\n');
	return (0);
}
