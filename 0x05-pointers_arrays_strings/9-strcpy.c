#include "holberton.h"
#include <string.h>

/**
 * _strcpy - coies a string
 * @dest: first character
 * @src: second character
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
