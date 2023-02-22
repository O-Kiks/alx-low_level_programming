#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: function that prints the 9 times table,
 * starting with 0.
 *
 * Return: 0 Always
 */

void times_table(void)
{
	int number = 0;
	int count = 0;
	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 9; number++)
		{
			int product = count * number;
			int dive = product / 10;
			int mode = product % 10;	
			if (product < 10)
			{
				_putchar('0' + product);

				if (number == 9)
				{
					continue;
				}
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
			else
			{
				_putchar ('0' + dive);
				_putchar ('0' + mode);
				
				if (number == 9)
				{
					continue;
				}
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
