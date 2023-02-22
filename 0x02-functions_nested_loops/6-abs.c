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
	char n1;
	char n2;

	n1 = -1 * n;
	n2 = 1 * n;

	if (n >= 48)
	{
		_putchar(n2);
	}
	else
	{
		_putchar(n1);
	}
	_putchar('\n');
	return (0);
}
