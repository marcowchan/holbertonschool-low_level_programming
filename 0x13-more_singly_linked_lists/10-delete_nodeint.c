#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head of the linked list
 * @index: index of the node to be deleted
 * Return: Success(1), Error(-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *delete;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index - 1; i++)
	{
		if (node->next)
			node = node->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = node;
		*head = node->next;
	}
	else
		delete = node->next;

	node->next = delete->next;
	free(delete);
	return (1);
}
