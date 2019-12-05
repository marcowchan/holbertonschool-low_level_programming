#include "binary_trees.h"

/**
 * recurse - Measures the height of the entire binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The height of a binary tree.
 */
size_t recurse(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = recurse(tree->left) + 1;
	right_height = recurse(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (depth);
	for (; tree && tree->parent; tree = tree->parent, depth++)
		;
	return (recurse(tree) - 1 - depth);
}
