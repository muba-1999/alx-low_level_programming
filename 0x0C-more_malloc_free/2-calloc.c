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
	int N = size;
	int ele = nmemb;

	if (nmemb == NULL)
	{
		return (NULL);
	}
	if (size == NULL)
	{
		return (NULL);
	}
	A = malloc(ele * N);
	if (A == NULL)
	{
		return (NULL);
	}
	return (A);
}
