#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - checks if there is a number in an array
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to the int_index function
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array + i) >= '1' && cmp(array + i) <= '9')
		{
			return (i);
		}
	}
	return (-1);
}
