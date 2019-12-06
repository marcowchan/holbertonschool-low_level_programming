#include "binary_trees.h"
#include <stdbool.h>
/**
 * count_nodes - counts number of nodes in binary tree
 * @root: root of tree
 * Return: number of nodes
 */
int count_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}
/**
 * is_complete - checks if tree has size - 1 nodes
 * @root: root of tree
 * @index: index assigned to node
 * @number_nodes: number of nodes
 * Return: true if tree is complete, false otherwise
 */
bool is_complete(const binary_tree_t *root, int index, int number_nodes)
{
	if (root == NULL)
		return (true);
	if (index >= number_nodes)
		return (false);
	return (is_complete(root->left, 2 * index + 1, number_nodes) &&
		is_complete(root->right, 2 * index + 2, number_nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: root of tree
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int node_count, index;

	if (!tree)
		return (0);

	node_count = count_nodes(tree);
	index = 0;
	if (is_complete(tree, index, node_count))
		return (1);
	else
		return (0);
}
