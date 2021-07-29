#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeing nodes in linked lists created dynamically using calloc
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *cur = head, *tmp;

	while (cur != NULL)
	{
		tmp = cur->next;

		free(cur->str);
		free(cur);
		cur = tmp;
	}
}
