#include "main.h"

/**
 * print_line - entry point
 * @n: argument to be checked
 * Return: 0 Always
 */

void print_line(int n)
{
	n = 10;
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n == 0)
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}


