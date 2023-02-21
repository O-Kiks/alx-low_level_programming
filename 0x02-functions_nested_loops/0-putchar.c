#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints _putchar followed by a new line
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char* word = "_putchar";
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
