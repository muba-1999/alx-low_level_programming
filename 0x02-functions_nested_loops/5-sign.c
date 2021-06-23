#include "holberton.h"

/**
 * print_sign: checks if a nuber is positive or negative
 * n: The character to be checked
 *
 * Return: 1 when positive
 * 0 when not positive or negative
 * -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
