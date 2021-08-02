#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - addes a node at the end
 * @head: the head node
 * @n: node to be added
 * Return: a struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new;
	return (new);

}
