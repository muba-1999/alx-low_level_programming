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
	unsigned int i;
	unsigned char *mem = s, value = b;

	for (i = 0; i < n; i++)
	{
		mem[i] = value;
	}
	return (mem);
}
