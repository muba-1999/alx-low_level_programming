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
		while(n >= 98)
		{
			printf("%d", n);
			for (i = 0; i < n; i++)
			{
				printf(", ");
			}
			n--;
		}
		printf("%d", n);
		for (i = 0; i < n; i++)
		{
			printf(", ");
		}
		n++;
	}
}
