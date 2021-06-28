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

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		*s = s[i];
	}
}
