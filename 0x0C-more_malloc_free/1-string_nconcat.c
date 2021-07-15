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
	int size = n;
	int i, j;
	int len1, len2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}
	if (size >= len2)
	{
		size = len2;
		s = malloc((len1 + len2 + 1) * sizeof(char));
	}
	else
	{
		s = malloc((len1 + n + 1) * sizeof(char));
	}
	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s[i++] = s2[j];
	}
	s[i++] = '\0';
	return (s);
}
