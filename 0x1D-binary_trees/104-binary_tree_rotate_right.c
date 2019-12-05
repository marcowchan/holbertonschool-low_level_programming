#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: The pointer to the root node.
 * Return: The pointer to the new root or (NULL).
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (NULL);
	new_root = tree->left;
	tree->left = new_root->right;
	if (tree->left)
		tree->left->parent = tree;
	new_root->right = tree;
	if (new_root->right)
		new_root->right->parent = new_root;
	return (new_root);
}
