#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed to the function
 * @separator: characters to print between the strings
 * @n: size of the arguments passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(arg, char *));
		if (va_arg(arg, char *) == NULL)
		{
			printf("nil");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
