#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: input string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
			_putchar ('\n');
		}
		if (str[count] % 2 == 0)
		{
			_putchar (str[count]);
		}
		count++;
	}
}

