#include "binary_trees.h"

/**
 * free_list - Frees a linked list.
 * @list: The pointer to the list to free.
 */
void free_list(tree_list_t *list)
{
	if (list)
		free_list(list->next);
	free(list);
}

/**
 * binary_tree_levelorder - Iterates a tree in level-order traversal.
 * @tree: The pointer to the root node.
 * @func: The pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	tree_list_t *head, *curr, *end;

	if (!tree || !func)
		return;
	head = malloc(sizeof(*head));
	if (!head)
		return;
	head->tree = tree;
	head->next = NULL;
	end = head;
	for (curr = head; curr; curr = curr->next)
	{
		(*func)(curr->tree->n);
		if (curr->tree->left)
		{
			end->next = malloc(sizeof(*end));
			if (!end)
				break;
			end = end->next;
			end->tree = curr->tree->left;
			end->next = NULL;
		}
		if (curr->tree->right)
		{
			end->next = malloc(sizeof(*end));
			if (!end)
				break;
			end = end->next;
			end->tree = curr->tree->right;
			end->next = NULL;
		}
	}
	free_list(head);
}
