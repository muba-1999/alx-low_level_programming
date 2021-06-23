#include "holberton.h"

/**
 * _isalpha - checks id an argument is a letter
 * @c - writes the value to the stdout
 *
 * Return: on True 1
 * on False 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
