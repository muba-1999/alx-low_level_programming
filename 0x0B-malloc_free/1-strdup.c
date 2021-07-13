#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str2;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	str2 = str;
	while (str[i] != '\0')
	{
		*str2++;
		i++;
	}
	return (str2);
}
