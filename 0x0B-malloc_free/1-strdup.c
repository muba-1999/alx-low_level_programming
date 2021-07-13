#include <stdlib.h>
#include <string.h>
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
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	str2 = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
