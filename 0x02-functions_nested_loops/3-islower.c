#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: a program that checks for lower case characters
 *
 * Return: 0 Always.
 */

int _islower(int letter)
{
if (letter >= 'a' && letter <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
