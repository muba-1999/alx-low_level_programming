#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory allocated to the struct
 * and sets the head to NULL
 * @head: head node
 * Return: nothing:
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}
