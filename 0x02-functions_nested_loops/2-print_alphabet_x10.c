#include "holberton.h"

#ifndef print_alphabet_x10
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

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
		
		i++;
	}
}
