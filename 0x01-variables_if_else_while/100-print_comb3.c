#include <stdio.h>

/**
 * main - Entry point
 * Descrription: A program that
 * from single digit numbers and prevents repetition of digits
 * by printing lower value number
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar (i + '0');
	putchar (j + '0');
	if (i < 8)
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar ('\n');
	return (0);
}
