#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeing nodes in linked lists created dynamically using calloc
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head);
	}
}
