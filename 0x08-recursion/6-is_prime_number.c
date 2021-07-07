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
	int i = 2;

	if (n % i != 0)
	{
		i++;
	}
	if (n == i)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
