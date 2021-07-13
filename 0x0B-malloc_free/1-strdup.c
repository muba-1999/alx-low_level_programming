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
	str2 = malloc(strlen(str) * sizeof(char));
	while (i < strlen(str))
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
