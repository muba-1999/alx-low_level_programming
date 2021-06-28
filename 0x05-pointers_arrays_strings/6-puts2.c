#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - starting point
 * @str - character to bet checked
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i+=2)
	{
		 printf("%s", str[i]);
	}
	printf("\n");
}
