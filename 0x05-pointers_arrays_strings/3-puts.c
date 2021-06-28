#include <unistd.h>
#include <string.h>
#include "holberton.c"

/**
 * _puts - prints a string to stdout
 * @str: character to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = _strlen(str);

	write(1, str, len);
}
