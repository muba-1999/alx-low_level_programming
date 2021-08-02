#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the length
 * @h: head node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t len = 0;

	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
