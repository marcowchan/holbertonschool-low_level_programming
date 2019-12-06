#include "binary_trees.h"

/**
 * search - Depth-first searches a tree.
 * @tree: The pointer to the tree.
 * @target: The pointer to the node to search for.
 * Return: If found (1) or (0).
 */
int search(const binary_tree_t *tree, const binary_tree_t *target)
{
	if (!tree)
		return (0);
	if (tree->n == target->n)
		return (1);
	search(tree->left, target);
	search(tree->right, target);
	return (search(tree->left, target) + search(tree->right, target));
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: The pointer to the first node.
 * @second: The pointer to the second node.
 * Return: The pointer to the lowest common ancestor or (NULL).
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lowest;

	if (!first || !second)
		return (NULL);
	lowest = (binary_tree_t *)first;
	while (lowest)
	{
		if (search(lowest, second))
			return (lowest);
		lowest = lowest->parent;
	}
	return (NULL);
}
