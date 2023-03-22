#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: test array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches (-1), if size <= 0 (-1)
 * index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}