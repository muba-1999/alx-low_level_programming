#include <stdio.h>
#include "holberton"

/**
 * strncpy - copies two strings
 * @dest: first character
 * @src: second character
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
