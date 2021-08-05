#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: pointer to unsigned lon integer
 * @index: index to bet set to 0
 * Return: 1 on sucess and -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, mask;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n & ~mask;
	return (1);
}
