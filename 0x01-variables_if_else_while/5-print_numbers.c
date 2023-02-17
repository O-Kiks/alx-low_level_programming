#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print single digit numbers between 0 and 10
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
	printf("%d", num);
	num++;
	}

	printf("\n");
	return (0);
}
