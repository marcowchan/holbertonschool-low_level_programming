#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - insertion sorts a doubly linked list
 * @list: the linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *move, *tmp, *next;

	if (list == NULL || *list == NULL)
		return;
	for (current = *list; current; current = next)
	{
		next = current->next;
		move = current;
		while(move->prev)
		{
			printf("%d %d\n", move->prev->n, move->n);
			if (move->n < move->prev->n)
			{
				puts("SWAP");
				tmp = move->prev;
				move->prev = tmp->prev;
				if (tmp->prev)
					tmp->prev->next = move;
				else
					*list = move;
				tmp->prev = move;
				tmp->next = move->next;
				move->next = tmp;
				print_list((const listint_t *)*list);
			}
			else
				break;
		}
	}
}
