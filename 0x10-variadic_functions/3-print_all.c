#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - simple copy of the printf function
 * @format: the formats to select
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	const char *s;
	int integer;
	float flo;
	int ch;
	char *str;
	va_list arg;

	va_start(arg, format);
	for (s = format; *s != '\0'; s++)
	{
		switch (*s)
		{
			case 'i':
				integer = va_arg(arg, int);
				printf("%i", integer);
				s++;
				break;
			case 'f':
				flo = va_arg(arg, double);
				printf("%f", flo);
				s++;
				break;
			case 'c':
				ch = va_arg(arg, int);
				printf("%i", ch);
				s++;
				break;
			case 's':
				str = va_arg(arg, char *);
				printf("%s", str);
				break;
			default:
				printf("%s", s);
		}
		if (*s != '\0' && (*s == 'i' || *s == 'f' || *s == 'c' || *s == 's'))
		{
			printf(",");
		}
		if (s == NULL)
		{
			printf("nil");
		}
	}
}
