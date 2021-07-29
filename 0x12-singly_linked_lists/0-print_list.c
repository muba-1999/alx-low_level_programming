#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints items in the list_t
 * @h: head node
 * Return: struct
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		count++;
	}
	return (count);
}
