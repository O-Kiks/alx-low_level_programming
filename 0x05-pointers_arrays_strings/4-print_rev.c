#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: input string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (count == '\0')
		{
			break;
		}
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar (s[count]);
	}
	_putchar ('\n');
}	
