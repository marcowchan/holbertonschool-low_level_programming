#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char *delim = "";
	unsigned long int i;
	hash_node_t *tuple = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		for (tuple = ht->array[i]; tuple != NULL; tuple = tuple->next)
		{
			printf("%s'%s': '%s'", delim, tuple->key, tuple->value);
			delim = ", ";
		}
	}
	puts("}");
}
