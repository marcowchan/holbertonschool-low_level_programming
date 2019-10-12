#include "hash_tables.h"

/**
 * hash_table_get - gets a value for a given key
 * @ht: hash table search
 * @key: key to find the value of
 * Return: Success(value), Error(NULL)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tuple;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (tuple = ht->array[index]; tuple != NULL; tuple = tuple->next)
	{
		if (strcmp(tuple->key, key) == 0)
			return (tuple->value);
	}
	return (NULL);
}
