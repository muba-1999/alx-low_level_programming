#include "main.h"
/**
 * print_binary - prints binary representaion
 * of a number
 * @n: number to be checked
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf("%ld", n & 1);
}
