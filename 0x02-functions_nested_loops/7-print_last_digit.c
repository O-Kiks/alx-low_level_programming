#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @modular: prints last digit of a number
 *
 * Return: Last Digit if true.
 */

int print_last_digit(int modular)
{
	
	if (modular < 0)
	{
		modular = -modular;
		char mode = modular % 10;
		
		_putchar ('0' + mode);
	return (modular % 10);
	}
	else
	{
		mode = modular;
		_putchar ('0'+ mode);
		return (modular % 10);
	}
}
