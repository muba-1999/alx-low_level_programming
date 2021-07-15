#include <stdlib.h>
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
	size_t i, j;
	int len = 0;
	size_t size;

	while (*s[len] != '\0')
	{
		len++;
	}
	size = len * n + 1;
	s = calloc(size * sizeof(char));
	if (s == NULL)
	{
		return (" ");
	}
	for (i = 0; i < len; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[len + j] = s2[j];
	}
	s[size - 1] = '\0';
	return (s);
}
