#include "holberton.h"

/**
 * _isupper - checks is a charater is uppercase
 * @c: The character to check
 *
 * Return: 1 on True
 * 0 on False
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
