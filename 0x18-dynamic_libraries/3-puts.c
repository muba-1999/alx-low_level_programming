#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: character to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = strlen(str);

	write(1, str, len);
	write(1, "\n", 1);
}
