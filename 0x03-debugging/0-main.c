#include "main.h"

/*
 * postitive_or_negative - Entry point
 *
 * Description: tests positive_or_negative function
 *
 * Return: 0 Always.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positve\n", i);
	}
	else if (i == 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
