#include <stdio.h>
#include "list.h"

size_t print_list(const list_t *h)
{
	node *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
}
