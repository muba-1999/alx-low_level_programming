#include "main.h"

/**
 * _isalpha - checks id an argument is a letter
 * @c: The character to print
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
