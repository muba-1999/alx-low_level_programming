#include "main.h"

/**
 * get_bit - gets the bit of a number
 * at a given index
 * @n: integer to get bit value from
 * @index: index of n
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
