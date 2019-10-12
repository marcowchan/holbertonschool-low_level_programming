#include "hash_tables.h"

/**
 * key_index - Computes the index of a key for a hash table
 * @key: key to hash and get index of
 * @size: size of the array of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
