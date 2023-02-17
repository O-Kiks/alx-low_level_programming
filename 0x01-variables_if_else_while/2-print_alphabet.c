#include <stdio.h>

/*
 * main - entry point
 * Description: A program to prints the alpabets a-z to the standard output
 * Return: 0 if successful
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
	return(0);
}
