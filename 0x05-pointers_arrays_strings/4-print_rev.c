#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - starting point
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j - 1;  i >= 0; i--)
	{
		printf("%s", s);
	}
}
