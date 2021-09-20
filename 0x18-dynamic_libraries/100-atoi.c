#include "main.h"

/**
 * _atoi - start point
 * @s: character to print
 *
 * Return: s for true
 * 0 on false
 */
int _atoi(char *s)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		sign = +1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (res * sign);
}
