#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabets in lower case and in a reversed order
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar (letter);
	letter--;
	}
	putchar ('\n');

	return (0);

}
