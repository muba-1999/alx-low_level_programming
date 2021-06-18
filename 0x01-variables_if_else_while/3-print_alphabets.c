#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, lower;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
