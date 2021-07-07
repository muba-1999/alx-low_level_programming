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
	int len = strlen(s);
	
	write(1, s, len);
	write(1, "\n", 1);
	_puts_recursion(s + 1);
}
