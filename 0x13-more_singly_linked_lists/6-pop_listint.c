#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the head node
 * @head: reference node
 * Return: the data of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int n;

	if (*head != NULL)
	{
		cur = *head;
		*head = (*(head))->next;
		n = cur->n;
		free(cur);
		return (n);
	}
	return (0);
}
