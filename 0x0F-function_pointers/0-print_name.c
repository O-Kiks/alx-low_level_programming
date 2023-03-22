#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
