#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Description: program that prints _putchar followed by a new line
 *
 * Return: Always 0.
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
