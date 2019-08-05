#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
