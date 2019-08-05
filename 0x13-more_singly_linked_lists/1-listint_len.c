#include <stddef.h>
#include "lists.h"

/**
 * listint_len - compute length of a linked list
 * @h: head of a linked list
 * Return: number of nodes of a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; h = h->next, len++)
		;
	return (len);
}
