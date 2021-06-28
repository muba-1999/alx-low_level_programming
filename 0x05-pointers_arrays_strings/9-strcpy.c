#include "holberton.h"

/**
 * _strcpy - coies a string
 * @dest: first character
 * @src: second character
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src);
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
