#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the length of list_t
 * @h: head node
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *cur;

	for (cur = h; cur; cur = cur->next)
	{
		count++;
	}
	return (count);
}
