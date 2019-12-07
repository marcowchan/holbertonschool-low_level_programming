#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * minValueNode - Gets the smallest node in the stree.
 * @root: The pointer to the root node.
 * Return: The pointer to the smallest node of the tree.
 */
bst_t *minValueNode(bst_t *root)
{
	bst_t *current = root;

	while (current && current->left != NULL)
		current = current->left;
	return (current);
}

/**
 * bst_remove - Removes a node from a Binary Search Tree.
 * @root: The pointer to the root node.
 * @value: The value to remove in the tree.
 * Return: The pointer to the new root node of the tree.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (root == NULL)
		return (root);
	if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
		if (root->left)
			root->left->parent = root;
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
		if (root->right)
			root->right->parent = root;
	}
	else
	{
		if (root->left == NULL)
		{
			temp = root->right;
			if (temp)
				temp->parent = root->parent;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			if (temp)
				temp->parent = root->parent;
			free(root);
			return (temp);
		}
		temp = minValueNode(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
