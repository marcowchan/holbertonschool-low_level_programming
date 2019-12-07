#include "binary_trees.h"
/**
 * array_to_avl - builds an AVL tree from an array
 * @array: array of values for nodes in new AVL tree
 * @size: number of elements in array
 * Return: pointer to the root node of the created AVL tree, or NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t a;
	avl_t *new;

	for (a = 0; a < size; a++)
	{
		avl_insert(&new, array[a]);
		if (!new)
			return (NULL);
	}
	return (new)
}
