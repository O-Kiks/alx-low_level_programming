#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: integer value received
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-(n));
	}
	return (0);
}
