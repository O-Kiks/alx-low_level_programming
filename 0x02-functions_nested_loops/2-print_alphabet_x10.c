#include "main"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lower case alphabets ten times and each line separated by a new line
 *
 * Return: 0 Always.
 */

void print_alphabet_x10(void)
{
	int count = 10;
	char letter = 'a';

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
	_putchar('\n');
	count++;
	}
}
