#include "lists.h"

/**
 * add_dnodeint_end - appends a node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to the allocated node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head && *head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
		new->prev = end;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
