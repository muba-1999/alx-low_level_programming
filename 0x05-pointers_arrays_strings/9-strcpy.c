#include "holberton.h"

/**
 * _strcpy - coies a string
 * @dest: first character
 * @src: second character
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < len && src[i] != '\0'; j++)
	{
		dest[j] = src[i];
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
