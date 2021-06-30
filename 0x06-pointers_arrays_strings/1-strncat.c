#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: first variable
 * @src: second variable
 * @n: size of src bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; i < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
