#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Entry point
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *A;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	A = malloc(nmemb * size);
	if (A == NULL)
	{
		return (NULL);
	}
	return (A);
}
