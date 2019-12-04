#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: The pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: A pointer to the created node, or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	if (new->left != NULL)
		new->left->parent = new;
	new->right = NULL;
	parent->left = new;
	return (new);
}
