#include "binary_trees.h"
#include <string.h>
/**
 * simpleBST - single function BST checker
 * @tree: root of binary tree
 * @flag: flag used for nag
 * Return: 1 if BST valid, 0 otherwise
 */
int simpleBST(const binary_tree_t *tree, int flag)
{
	static binary_tree_t *prev;

	if (flag == 1)
	{
		prev = NULL;
		flag = 0;
	}
	if (tree)
	{
		if (simpleBST(tree->left, 0) == 0)
			return (0);
/*
 *		if (prev)
 *		printf("root %d, prev %d\n", tree->n, prev->n);
*/
		if (prev != NULL && tree->n <= prev->n)
			return (0);
		prev = (binary_tree_t *)tree;
		return (simpleBST(tree->right, 0));
	}
	return (1);
}
/**
 * max_height - finds height of binary tree
 * @tree: root of binary tree
 * Return: height of binary tree
 */
int max_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (max_height(tree->left) > max_height(tree->right))
		return (1 + max_height(tree->left));
	return (1 + max_height(tree->right));
}
/**
 * AVL - checks if binary tree is balanced
 * @tree: root of binary tree
 * Return: 1 if  balanced valid, 0 otherwise
 */
int AVL(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (!tree)
		return (1);
	lh = max_height(tree->left);
	rh = max_height(tree->right);
	if (abs(lh - rh) <= 1 && AVL(tree->left) && AVL(tree->right))
		return (1);
	return (0);
}
/**
 * binary_tree_is_avl - checks if binary tree is BST and AVL valid
 * @tree: root of binary tree
 * Return: 1 if BST and AVL valid, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
/*
 *	printf("%d pass simpleBST \n", simpleBST(tree, 1));
 *	printf("%d pass balance \n", AVL(tree));
 */
	if (AVL(tree) && simpleBST(tree, 1))
		return (1);
	else
		return (0);
}
