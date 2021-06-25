#include "holberton.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 1 on true
 * 0 on false
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
