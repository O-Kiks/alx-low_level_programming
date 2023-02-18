#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit numbers between 0 and 10 and separate them with a comma
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char num = 48;

	while (num <= 57)
	{
	putchar (num);
	if (num != 57)
	{
	putchar (',');
	putchar (' ');
	}
	num++;
	}
	putchar('\n');
	return (0);
}
