#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(*(table->array)) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
