#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed to the function
 * @separator: string to be printed between numbers
 * @n: size of the numbers to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
