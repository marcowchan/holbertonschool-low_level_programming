#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: The pointer to the root node.
 * Return: The pointer to the new root or (NULL).
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->right)
		return (NULL);
	new_root = tree->right;
	tree->right = new_root->left;
	if (tree->right)
		tree->right->parent = tree;
	new_root->left = tree;
	if (new_root->left)
		new_root->left->parent = new_root;
	return (new_root);
}
