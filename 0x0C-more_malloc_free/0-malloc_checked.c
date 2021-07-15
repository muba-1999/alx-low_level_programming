#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - assigns memory
 * @b: character to be assigned memory to
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
