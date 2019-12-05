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
 * tree_inorder - Iterates a tree in in-order traversal and creates a list.
 * @tree: The pointer to the root node of the tree to traverse.
 * @head: The pointer to the head node of the list.
 * @end: The pointer to the end node of the list.
 */
void tree_inorder(
	const binary_tree_t *tree, tree_list_t **head, tree_list_t **end)
{
	tree_list_t *list_node;

	if (!tree)
		return;
	list_node = malloc(sizeof(*list_node));
	if (!list_node)
		return;
	list_node->tree = tree;
	list_node->next = NULL;
	tree_inorder(tree->left, head, end);
	if (*end == NULL)
		*head = list_node;
	else
		(*end)->next = list_node;
	*end = list_node;
	tree_inorder(tree->right, head, end);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 * @tree: The pointer to the root node of the tree.
 * Return: If a binary tree is a valid Binary Search Tree (1) or (0).
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	tree_list_t *head = NULL, *end = NULL;

	if (!tree)
		return (0);
	tree_inorder(tree, &head, &end);
	end = head;
	for (; end; end = end->next)
	{
		if (end->next)
		{
			if (end->tree->n >= end->next->tree->n)
			{
				free_list(head);
				return (0);
			}
		}
	}
	free_list(head);
	return (1);
}
