#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: pointer to a function
 * @name: name to be printed
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f = &name;
	_putchar(f);
}
