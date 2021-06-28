#include "holberton.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
