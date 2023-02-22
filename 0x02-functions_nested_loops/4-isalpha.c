#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @letter: alphabet (upper or lower case)
 *
 * Return: 1 if true, 0 if not true.
 */

int _isalpha(int letter)
{
	if ((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
