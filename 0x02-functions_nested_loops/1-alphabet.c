#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: print lower case alphabets followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter = 'a';

	for ( letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
}
