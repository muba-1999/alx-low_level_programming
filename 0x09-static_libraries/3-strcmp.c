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
	int s11 = s1;
	int s22 = s2;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s11 - s22);
}
