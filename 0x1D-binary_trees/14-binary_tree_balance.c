#include "binary_trees.h"
int this_binary_tree_height(const binary_tree_t *tree, int rootval);
int recurse(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: The pointer to the root of the tree.
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		l_height = this_binary_tree_height(tree->left, tree->left->n);
		l_height++;
	}
	if (tree->right)
	{
		r_height = this_binary_tree_height(tree->right, tree->right->n);
		r_height++;
	}
	return (l_height - r_height);
}
/**
 * recurse - Measures the height of the entire binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The height of a binary tree.
 */
int recurse(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = recurse(tree->left) + 1;
	right_height = recurse(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
 * this_binary_tree_height - Measures the height of a binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * @rootval: The value of the root head.
 * Return: The height of a binary tree.
 */
int this_binary_tree_height(const binary_tree_t *tree, int rootval)
{
	int depth;

	for (depth = 0; tree && tree->n != rootval; tree = tree->parent, depth++)
		;
	return (recurse(tree) - 1 - depth);
}
