#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the index of a node
 * @head: reference node
 * @index: index of the node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;
	unsigned int count = 0;

	if (head != NULL)
	{
		cur = head;

		while (cur != NULL)
		{
			if (count == index)
			{
				return (cur);
			}
			cur = cur->next;
			count++;
		}
	}
	return (NULL);
}
