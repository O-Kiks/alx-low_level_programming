#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: character to check
 *
 * description: a function that checks for a digit (0 through 9)
 *
 * Return: 1 if c is uppercase
 */

int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	else
	{
	return (0);
	}
}
