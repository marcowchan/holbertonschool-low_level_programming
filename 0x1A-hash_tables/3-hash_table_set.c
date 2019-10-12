#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds a key-value pair to a hash table
 * @ht: hash table to add key-value pair to
 * @key: key to add
 * @value: value to add
 * Return: Success(0), Error(1)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tuple;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	tuple = malloc(sizeof(*tuple));
	if (tuple == NULL)
		return (0);
	tuple->key = (char *)key;
	tuple->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	tuple->next = ht->array[index];
	ht->array[index] = tuple;
	return (1);
}
