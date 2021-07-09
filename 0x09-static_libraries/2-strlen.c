#include "holberton.h"

/**
 * _strlen - checks the length of a string
 * @s: character to be checked
 *
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
