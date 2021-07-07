#include <unistd.h>
#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: character to print
 *
 * Return: void
 */
void print(char *str)
{
	write(1, *str, 1000);
	write(1, "\n", 1);
}
void _puts_recursion(char *s)
{
	print(s);
	_puts_recursion(s + 1);
}
