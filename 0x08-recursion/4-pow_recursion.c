#include "main.h"

/**
 * _pow_recursion - function that returns the value of an integer
 * raised to another integer
 *
 * @x: input integer
 * @y: second input integer
 *
 * Return: value of an integer raises to another integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
