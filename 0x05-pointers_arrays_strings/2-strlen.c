#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: input variable
 *
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
