#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: print digitas from 0 to 9 without 2 and 4
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar (number + '0');
		}
	}
	_putchar ('\n');
}
