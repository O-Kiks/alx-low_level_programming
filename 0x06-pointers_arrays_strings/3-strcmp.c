#include "main.h"

/**
 * _strcmp - entry point
 *
 * @*s1: value of string 1
 * @*s2: vaue of string 2
 *
 * Return: return an integer depending on difference
 * between compared strings
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + i) = '\0') && (*(s2 + i) = '\0'))
		{
			break;
		}
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}

		
