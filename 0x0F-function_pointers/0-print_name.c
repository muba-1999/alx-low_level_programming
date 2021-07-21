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
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
