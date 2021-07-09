#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: first character
 * @b: second character
 * @n: size of character
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
