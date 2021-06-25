#include "holberton.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 1 for True
 * 0 for False
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
