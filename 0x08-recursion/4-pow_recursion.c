#include "holberton.h"

/**
 * _pow_recursion - raises @x to the power @y
 * @x: the base number
 * @y: exponent
 *
 * Return: 1 if @y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
