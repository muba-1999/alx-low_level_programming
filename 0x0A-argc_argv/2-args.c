#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: 1 dimension array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
