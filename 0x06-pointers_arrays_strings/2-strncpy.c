#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * @src: source string
 * @dest: destination string
 * @n: size of spacetaken from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int count = 0;

	for (count = 0; (count < n> && (sr[count] != '\0')
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
