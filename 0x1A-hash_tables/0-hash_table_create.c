#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	hash = malloc(size);

	if (hash == NULL)
	{
		return (NULL);
	}
	return (hash);
	free(hash);
}
