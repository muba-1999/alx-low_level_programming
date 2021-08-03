#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints integers
 * @h: head node
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
