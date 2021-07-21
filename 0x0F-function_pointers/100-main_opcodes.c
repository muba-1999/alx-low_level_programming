#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char **argv)
{
	int nb, i;
	int (*fun)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++)
	{
		printf("%02x", *((unsigned char *)fun + i));
		if (nb != (nb - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
