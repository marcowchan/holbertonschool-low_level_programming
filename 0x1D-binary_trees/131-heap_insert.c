#include "binary_trees.h"

/**
 * countNodes - Counts the number of nodes in a tree.
 * @tree: The pointer to the root of the tree.
 * Return: The number of nodes in the tree.
 */
int countNodes(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * complete_insert - Inserts in complete order.
 * @tree: The pointer to the root of the tree.
 * @value: The value of the node to insert.
 * @index: The index of the current node.
 * @pos: The position to insert the node.
 * Return: The pointer to the inserted node.
 */
heap_t *complete_insert(binary_tree_t *tree, int value, int index, int pos)
{
	heap_t *inserted;

	if (!tree)
		return (NULL);
	if (index + 1 == pos / 2)
	{
		if (pos & 1)
		{
			tree->right = binary_tree_node(tree, value);
			return (tree->right);
		}
		else
		{
			tree->left = binary_tree_node(tree, value);
			return (tree->left);
		}
	}
	inserted = complete_insert(tree->left, value, 2 * index + 1, pos);
	if (inserted)
		return (inserted);
	return (complete_insert(tree->right, value, 2 * index + 2, pos));
}

/**
 * heap_insert - Inserts a value in Max Binary Heap.
 * @root: The pointer to the root of the tree.
 * @value: The value of the node to insert.
 * Return: The pointer to the inserted node.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *inserted;

	if (!*root)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}
	inserted = complete_insert(*root, value, 0, countNodes(*root) + 1);
	while (inserted->parent && inserted->n > inserted->parent->n)
	{
		inserted->n = inserted->parent->n;
		inserted->parent->n = value;
		inserted = inserted->parent;
	}
	return (inserted);
}
