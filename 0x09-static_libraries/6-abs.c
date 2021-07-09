#include "holberton.h"

/**
 * _abs - checks if an integer is an absolute value
 *@n: The value to be checked
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int abso;

	if (n < 0)
	{
		abso = n * -1;
		return (abso);
	}
	else
	{
		return (n);
	}
}
