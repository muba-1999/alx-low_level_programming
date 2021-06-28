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
	for (i = (len - 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
