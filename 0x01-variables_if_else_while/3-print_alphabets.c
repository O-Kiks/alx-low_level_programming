#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets first in small letters, then in capital letters
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter <= 'z')
	{
	putchar (letter);
	letter++;
	}
	while (upper <= 'Z')
	{
	putchar (upper);
	upper++;
	}

	putchar ('\n');
	return (0);
}
