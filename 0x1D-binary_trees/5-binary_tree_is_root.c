#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: The pointer to the node to check.
 * Return: If node is a root (1), or (0).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
