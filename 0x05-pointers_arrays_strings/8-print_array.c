#include "holberton."

/**
 *print_array - start point
 *@a: array
 *@n: elements of an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
