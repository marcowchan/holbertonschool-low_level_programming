#include "hash_tables.h"

/**
 * hash_table_set - adds a key-value pair to a hash table
 * @ht: hash table to add key-value pair to
 * @key: key to add
 * @value: value to add
 * Return: Success(1), Error(0)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tuple;
	char *new_value = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (tuple = ht->array[index]; tuple != NULL; tuple = tuple->next)
	{
		if (strcmp(tuple->key, key) == 0)
		{
			if (value != NULL)
			{
				new_value = strdup(value);
				if (new_value == NULL)
					return (0);
			}
			free(tuple->value);
			tuple->value = new_value;
			return (1);
		}
	}
	tuple = malloc(sizeof(*tuple));
	if (tuple == NULL)
		return (0);
	tuple->key = strdup(key);
	tuple->value = strdup(value);
	if (tuple->key == NULL || tuple->value == NULL)
	{
		free(tuple->key);
		free(tuple->value);
		free(tuple);
		return (0);
	}
	tuple->next = ht->array[index];
	ht->array[index] = tuple;
	return (1);
}
