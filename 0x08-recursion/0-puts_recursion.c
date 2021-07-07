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
	write(1, s, 1000);
	write(1, "\n", 1);
	_putchar(s);
	_puts_recursion(s + 1);
}
