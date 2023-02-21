#include "main.h"

/**
 * main - check the code
 *
 * Description: print lower case alphabets followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a';  letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
