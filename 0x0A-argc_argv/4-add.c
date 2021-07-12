#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}

	return (0);
}
