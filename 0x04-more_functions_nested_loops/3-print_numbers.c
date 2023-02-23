#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: print digits from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int digit = 0;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar ('\n');
}
