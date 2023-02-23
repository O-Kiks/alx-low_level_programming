#include "main.h"

/**
 * more_numbers - entry point
 *
 * description: a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: void.
 */

void more_numbers(void)
{
	int count = 0;
	int number = 0;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar ((number / 10) + '0');
			_putchar ((number % 10) + '0');
		}
		_putchar('\n');
	}
}
