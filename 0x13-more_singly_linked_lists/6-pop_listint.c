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
	int res = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}

	cur = *head;

	(*head) = (*head)->next;
	free(cur);
	return (res);
}
