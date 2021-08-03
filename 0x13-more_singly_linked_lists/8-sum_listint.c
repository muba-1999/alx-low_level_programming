#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums thr data of listint_t
 * @head: reference node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
