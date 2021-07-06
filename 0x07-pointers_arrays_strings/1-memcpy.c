#include <stdio.h>
#include "holberton.h"

/**
 * _memcpy - copies memory
 * @dest: first character
 * @src: second character
 * @n: size of memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
