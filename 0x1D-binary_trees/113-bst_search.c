#include "binary_trees.h"

/**
 * bst_search -  Searches for a value in a Binary Search Tree.
 * @tree: The pointer to the root node of the BST to search.
 * @value: The value to search in the tree.
 * Return: The pointer to the node containing a value or (NULL).
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *left = NULL, *right = NULL;

	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	left = bst_search(tree->left, value);
	right = bst_search(tree->right, value);
	if (left)
		return (left);
	if (right)
		return (right);
	return (NULL);
}
