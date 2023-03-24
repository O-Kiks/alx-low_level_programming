#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variadic list
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int index;
	char *str;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && index != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

