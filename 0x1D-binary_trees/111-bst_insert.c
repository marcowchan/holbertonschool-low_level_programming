#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node.
 * @value: The value to store in the node to be inserted.
 * Return: A pointer to the inserted node or (NULL).
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *traverse;

	new = binary_tree_node(NULL, value);
	if (!new)
		return (NULL);
	if (*tree == NULL)
	{
		new->parent = NULL;
		*tree = new;
		return (new);
	}
	for (traverse = *tree; traverse;)
	{
		if (value < traverse->n)
		{
			if (!traverse->left)
			{
				new->parent = traverse;
				traverse->left = new;
				return (new);
			}
			traverse = traverse->left;
		}
		else if (value > traverse->n)
		{
			if (!traverse->right)
			{
				new->parent = traverse;
				traverse->right = new;
				return (new);
			}
			traverse = traverse->right;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (NULL);
}
