#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - start point
 * @str: character to be checked;
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, k;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	j = len - 1;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (k = j / 2; k < j; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
