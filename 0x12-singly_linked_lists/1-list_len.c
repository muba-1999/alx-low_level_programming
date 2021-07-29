#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count;
	list_t cur;

	for (cur = h; cur; cur = cur->next)
	{
		count++;
	}
	return (count);
}
