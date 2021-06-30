#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: first character
 * @src: second character
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest != '\0'; i++)
	{

	}
	for (j = 0; src != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
