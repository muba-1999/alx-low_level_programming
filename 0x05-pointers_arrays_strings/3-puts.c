#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: character to be printed
 *
 * Return: void
 */
void _puts(char *str);
{
	write(1, str);
}
