#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program testing knowledge of conditional statements
 *
 * Return: 0 Always (success)
 */

int main()
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e'&& letter != 'q')
	{
	putchar (letter);
	}
	letter++;
	}
	putchar ('\n');

	return (0);
}
