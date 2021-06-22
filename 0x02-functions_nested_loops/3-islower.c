#include "holberton.h"

/**
 * _islower - checks if a letter is lower case
 *
 * Return: 1 True
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
