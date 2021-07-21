#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - loops through an array
 * @array: array to be looped through
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
