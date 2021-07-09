#include "holberton.h"

/**
 * _islower - checks if a letter is lower case
 *@c: character to print
 *
 * Return: 1 on True
 * on false 0
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
