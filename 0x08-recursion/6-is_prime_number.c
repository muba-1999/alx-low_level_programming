#include "holberton.h"

/**
 * is_prime_number - checks if @n is a prime number
 * @n: number to be checked
 *
 * Return: 1 if @n is a prime number
 * 0 if @n is not a prime number
 */
int is_prime_number(int n)
{
	int count = n / 2;

	if (count == 1)
	{
		return (1);
	}
	else
	{
		if (n % count == 0)
		{
			return (0);
		}
		else
		{
			count = count - 1;
			is_prime_number(n);
		}
	}
}
