#include "binary_trees.h"

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

	for (i = 0; array && i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
