#include <stdio.h>
#include "holberton.h"

/**
 * ca_string - capitalizes first letter of all words in a string
 * @s: character to check
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
}
