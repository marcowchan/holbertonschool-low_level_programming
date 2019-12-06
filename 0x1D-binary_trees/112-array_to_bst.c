#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: The pointer to the root of the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

/**
 * array_to_bst - Builds a Binary Search Tree from an array.
 * @array: The pointer to the first element of the array.
 * @size: The number of element in the array.
 * Return: The pointer to the root node of the created BST.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (!bst_insert(&root, array[i]))
		{
			binary_tree_delete(root);
			return (NULL);
		}
	}
	return (root);
}
