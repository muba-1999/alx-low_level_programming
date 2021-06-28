#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - starting point
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	j = len - 1;
	for (i = 0; i < len; i++)
	{
		s[i] = s[j];
		j--;
	}
}
