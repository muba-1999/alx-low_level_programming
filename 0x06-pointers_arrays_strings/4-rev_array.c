#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reversing contents of an array
 * @a: an array
 * @n: size an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - i - 1] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
