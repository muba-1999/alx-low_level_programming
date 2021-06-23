#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print s numbers from n to 98
 *@n: The character to print

 * Return: void has no return value
 */
void print_to_98(int n)
{
	int i;

	while (i <= 98)
	{
		for (n; n >= 98; n--)
		{
			printf("%d", n);
			for (i = 0; i < n; i++)
			{
				printf(", ");
			}
		}
		printf("%d", n);
		for (i = 0; i < n; i++)
		{
			printf(", ");
		}
		n++;
	}
}
