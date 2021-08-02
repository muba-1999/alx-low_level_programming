#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at th begining of listint_t
 * @head: the head node
 * @n: node to be added
 * Return: a struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
