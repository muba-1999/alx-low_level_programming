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
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	str2 = malloc((len + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
