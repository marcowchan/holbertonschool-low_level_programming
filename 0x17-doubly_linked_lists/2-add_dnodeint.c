#include "lists.h"

/**
 * add_dnodeint - prepends a node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer the new node should contain
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (head)
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	else
		new->next = NULL;
	return (new);
}
