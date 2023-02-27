#include "main.h"

/**
 * _puts - entry point
 *
 * @str: input string
 *
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (count > 0)
	{
		if (count == '\0')
		{
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
