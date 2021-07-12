#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: 1 dimessional array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}
