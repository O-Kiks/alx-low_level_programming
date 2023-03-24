#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variadic list
 *
 * Return: void (no value)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && index != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
