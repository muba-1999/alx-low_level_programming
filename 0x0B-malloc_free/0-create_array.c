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
	int i = 0;
	int asize;

	if (size == 0)
	{
		return (NULL);
	}
	asize = size - 1;
	c = malloc(asize * sizeof(char));
	while (i < asize)
	{
		size[i] = c[i + 1];
		i++;
	}
}
