#include "holberton.h"

/**
 * _islower - checks if a letter is lower case
 *
 * Return: 1 True
 * c - returns a character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
