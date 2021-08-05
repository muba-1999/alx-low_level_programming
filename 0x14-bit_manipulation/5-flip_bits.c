#include "main.h"

/**
 * flip_bits - flip bits of n and m
 * @n: initial integer
 * @m: second integer
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int flipped;
	unsigned long int i;

	size = sizeof(n) * 8 - 1;
	flipped = 0;
	i = 0;
	while (i <= size)
	{
		if ((n & 1) != (m & 1))
		{
			flipped++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (flipped);
}
