#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;

	while (s1[i] != '\0')
	{
		s3[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		s3[k] = s2[j];
		j++;
		k++;
	}
	s3[k] = '\0';
	while (s3[len] != '\0')
	{
		len++;
	}
	s3[k] = '\0';
	s3 = malloc((len + 1) * sizeof(int));
	return (s3);
}
