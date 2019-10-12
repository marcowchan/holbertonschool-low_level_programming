#include "hash_tables.h"

/**
 * hash_table_delete - deallocates a hash table
 * @ht: hash table to deallocate
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tuple = NULL, *delete = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tuple = ht->array[i];
		while (tuple != NULL)
		{
			delete = tuple;
			tuple = tuple->next;
			free(delete->key);
			free(delete->value);
			free(delete);
		}
	}
	free(ht->array);
	free(ht);
}
