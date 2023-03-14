#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 *
 * @size: array size
 * @c: input character
 *
 * Return: NULL if size = 0, pointer to the
 *  array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
