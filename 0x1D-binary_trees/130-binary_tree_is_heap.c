#include "binary_trees.h"

/**
 * countNodes - Counts the number of nodes in a tree.
 * @tree: The pointer to the root of the tree.
 * Return: The number of nodes in the tree.
 */
unsigned int countNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * isCompleteUtil - Checks if a tree is complete.
 * @tree: The pointer to the root of the tree.
 * @index: The index of the current node.
 * @number_nodes: The number of nodes in the tree.
 * Return: If the tree is complete (1) or (0).
 */
int isCompleteUtil(const binary_tree_t *tree, unsigned int index,
	unsigned int number_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= number_nodes)
		return (0);
	return (isCompleteUtil(tree->left, 2 * index + 1, number_nodes) &&
	isCompleteUtil(tree->right, 2 * index + 2, number_nodes));
}

/**
 * isHeapUtil - Checks if the nodes are max of it's children.
 * @tree: The pointer to the root of the tree.
 * Return: True (1) or (0).
 */
int isHeapUtil(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right == NULL)
		return (tree->n >= tree->left->n);
	if (tree->n >= tree->left->n && tree->n >= tree->right->n)
		return ((isHeapUtil(tree->left)) && (isHeapUtil(tree->right)));
	else
		return (0);
}

/**
 * binary_tree_is_heap - Checks if a tree is a max heap.
 * @tree: The pointer to the root of the tree.
 * Return: If the tree is a max heap (1) or (0).
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (isCompleteUtil(tree, 0, countNodes(tree)) && isHeapUtil(tree))
		return (1);
	return (0);
}
