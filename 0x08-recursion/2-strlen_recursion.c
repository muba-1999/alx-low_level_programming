#include "holberton.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: character to print
 * 
 * Return: 1 if @s == NULL byte
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (i);
	}
	else
	{
		i++;
	}
	_strlen_recursion(s, i);
}
