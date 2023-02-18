#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the hexadecimal numbers in lower case letters
 *
 * Return: 0 Alwyas (success)
 */

int main(void)
{
	char num = 48;
	char letter = 'a';

	while (num < 58)
	{
	putchar (num);
	num++;
	}
	while (letter <= 'f')
	{
	putchar (letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
