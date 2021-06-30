#include <stdio.h>
#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first character
 * @s2: second character
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int s1;
	int s2;

	while (s1[i] != '\0' && s[i] == s2[i])
	{
		i++;
	}
	return (s1 - s2);
}
