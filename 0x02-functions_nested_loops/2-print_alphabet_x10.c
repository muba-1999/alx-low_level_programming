#include "holberton.h"

#ifndef HOLBERTON_H_
#define HOLBERTON_H_
void print_alphabet_x10(void)
#endif


/**print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
	i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		
		i++;
	}
}
