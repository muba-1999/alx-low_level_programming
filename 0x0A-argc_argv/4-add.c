#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == 0)
		{
			printf("%d\n", 0);
		}
		else if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
