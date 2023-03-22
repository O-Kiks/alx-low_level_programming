#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * @name: name to be printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
