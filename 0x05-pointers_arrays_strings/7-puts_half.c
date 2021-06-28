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
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i - 1]);
		}
	}
	_putchar('\n');
}
