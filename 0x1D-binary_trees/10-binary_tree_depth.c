#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: The pointer to the root node of the tree to measure the height.
 * Return: The depth of a binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	for (depth = 0; tree && tree->parent; tree = tree->parent, depth++)
		;
	return (depth);
}
