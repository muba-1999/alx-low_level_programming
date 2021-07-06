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
	if ((dest != '\0') && (src != '\0'))
	{
		while (n)
		{
			*(dest++) = *(src++);
			n--;
		}
	}
	return (dest);
}
