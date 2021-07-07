#include "holberton.h"

/**
 * factorial - finds the factorial of a given number
 * @n: number to be checked
 *
 * Return: 1 when @n == 0
 * -1 when @n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
