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
	int count = 0;
	const list_t *cur;

	while (tmp != NULL)
	{
		for (cur = h; cur; cur = cur->next)
		{
			count++;
		}
		if (tmp->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", count, tmp->str);
		}
		tmp = tmp->next;
	}
	return (count);
}
