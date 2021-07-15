#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - prints a range of an array
 * @min: first elements
 * @max: second elements
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int len1 = 0;
	int len2 = 0;

	if (main > max)
	{
		return (NULL);
	}
	while (len1 < min)
	{
		len1++;
	}
	while (len2 < max)
	{
		len2++;
	}
	arr = malloc((len1 * len2) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < min; i++)
	{
		arr[i] = min[i];
	}
	for (i = 0; i < max; i++)
	{
		arr[len1 + i] = max[i];
	}
	return (arr);
}
