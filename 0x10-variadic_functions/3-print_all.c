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
	int integer;
	float flo;
	char ch;
	char *str;
	va_list arg;

	va_start(arg, format);
	while (format)
	{
		switch (*format)
		{
			case 'i':
				integer = va_arg(arg, int);
				printf("%i", integer);
				format++;
				break;
			case 'f':
				flo = va_arg(arg, float);
				printf("f", flo);
				format++;
				break;
			case 'c':
				ch = va_arg(arg, char);
				printf("c", ch);
				format++;
				break;
			case 's':
				str = va_arg(arg, char *);
				printf("%s", str);
				format++;
				break;
			default:
				printf("%s", *format);
		}
		if (str == NULL)
		{
			printf("nil");
		}
		if (*format != '\0' && (*format == 'i || *format == 'f' || *format == 'c' || *format == 's'))
		{
			printf(",");
		}
		format++;
	}
	va_end(arg);
}
