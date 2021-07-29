#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeing nodes in linked lists created dynamically using calloc
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t cur = heard;
	
	while (cur != NULL)
	{
		list_t tmp = cur->next;
		free(cur);
		cur = tmp;
	}
}
