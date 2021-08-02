#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the memory allocated to listint_t
 * @head: head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cur = head, *tmp;

	while (cur != NULL)
	{
		tmp = cur->next;

		free(cur);
		cur = tmp;
	}
}
