#include "binary_trees.h"
int p_recurse(const binary_tree_t *tree);
int p_binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: The pointer to the root of the tree.
 * Return: If the tree is perfect (1) or (0).
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (p_binary_tree_height(tree) == -1)
		return (0);
	return (1);
}
/**
 * p_recurse - Measures the height of the entire binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The height of a binary tree.
 */
int p_recurse(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = p_recurse(tree->left) + 1;
	right_height = p_recurse(tree->right) + 1;
	if (left_height != right_height)
		return (-1);
	return (right_height);
}

/**
 * p_binary_tree_height - Measures the height of a binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The height of a binary tree.
 */
int p_binary_tree_height(const binary_tree_t *tree)
{
	int depth = 0;

	if (p_recurse(tree) == -1)
		return (-1);
	if (!tree)
		return (depth);
	for (; tree && tree->parent; tree = tree->parent, depth++)
		;
	return (p_recurse(tree) - 1 - depth);
}
