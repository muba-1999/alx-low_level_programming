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
	int count = 0;

	if (n / is_prime_number(n - 1) == 0)
	{
		count++;
	}
	if (count == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
