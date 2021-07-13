#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates and array
 * @size: size of the array
 * @c: characters of the array
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
