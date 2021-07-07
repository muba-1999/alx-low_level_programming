#include <unistd.h>
#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: character to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	write(1, s, len);
	write(1, "\n", 1);
}
