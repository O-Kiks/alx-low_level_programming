#include "main.h"

/**
 * _islower - Entry point
 *
 * @letter: alphabet received
 * Return: 0 if untrue, 1 if true.
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
