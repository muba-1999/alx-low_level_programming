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
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	c = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		return (c[i]);
	}
}
