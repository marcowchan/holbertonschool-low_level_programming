#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *node;

	if (!head)
		return;
	while (head->next)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
	free(head);
}
