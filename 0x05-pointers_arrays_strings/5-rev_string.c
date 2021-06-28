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
	int i;
	int len = 0;
	char rev;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
