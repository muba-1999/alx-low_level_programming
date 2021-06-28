#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - starting point
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s);
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		s = s[i];
	}
}
