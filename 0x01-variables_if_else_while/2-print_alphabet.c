#include <stdio.h>

/**
 * main - entry point
 * main - Entry point
 * Description: A program to prints the alpabets a-z to the standard output
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar ('\n');
	return (0);
}
