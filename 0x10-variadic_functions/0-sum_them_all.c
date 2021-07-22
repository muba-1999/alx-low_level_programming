#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all the values passed to the function
 * @n: number of items to be passed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	return (sum);

	va_end(arg);
}
