#include "binary_trees.h"
size_t binary_tree_counter(const binary_tree_t *tree);
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: The pointer to the root of the tree to count the number of nodes.
 * Return: The number of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_counter(tree);
	return (size);
}
/**
 * binary_tree_counter - Measures the size of a binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The size of a binary tree.
 */
size_t binary_tree_counter(const binary_tree_t *tree)
{
	size_t c, c2;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	c = binary_tree_counter(tree->left);
	c2 = binary_tree_counter(tree->right);

	return (c + c2 + 1);
}
