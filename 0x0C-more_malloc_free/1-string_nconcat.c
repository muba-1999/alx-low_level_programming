#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * string_nconcat - joins two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t i;
	size_t size = sttlen(s1) * strlen(s2);

	s = malloc(size * sizeof(char));
	for (i = 0; i < len; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[len + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
