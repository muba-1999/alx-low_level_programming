#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * list_len - prints the length of list_t
 * @h: head node 
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *cur;

	for (cur = h; cur; cur = cur->next)
	{
		count++;
	}
	return (count);
}
