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
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len -1; i >= 0; i--)
	{
		printf("%c\n", s[i]);
	}
}
