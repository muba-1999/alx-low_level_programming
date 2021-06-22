#include "holberton.h"

/**
 * _isalpha - checks id an argument is a letter
 * @c - writes the value to the stdout
 *
 * Return: on True 1
 * Return: on False 0
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((c == i) || (c == 'A' && 'Z'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
