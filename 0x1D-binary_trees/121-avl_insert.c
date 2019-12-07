#include "binary_trees.h"
#include <stdlib.h>
/**
 * height - measures height of avl_t
 * @tree: root of avl_t tree
 * Return: height
 */
int height(avl_t *tree)
{
	int height_l;
	int height_r;

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;

	return (height_l > height_r ? height_l : height_r);
}
/**
 * right_rotate - rotates right
 * @y: node to rotate around
 * Return: pointer to created node
 */
avl_t *right_rotate(avl_t *y)
{
	avl_t *new = y->left, *T2 = new->right;

	/* Perform rotation */
	new->right = y;
	y->left = T2;
	/* Return new root*/
	return (new);
}
/**
 * left_rotate - rotates left
 * @x: node to rotate around
 * Return: pointer to created node
 */
avl_t *left_rotate(avl_t *x)
{
	avl_t *new = x->right, *T2 = new->left;

	/* Perform rotation*/
	new->left = x;
	x->right = T2;
	/* Return new root*/
	return (new);
}
/**
 * avl_balance - balance but for avl
 * @tree: double pointer to root of avl tree
 * Return: int balance
 */
int avl_balance(avl_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
/**
 * avl_insert - inserts a value into AVL tree
 * @tree: double pointer to root of avl tree
 * @value: value to be inserted
 * Return: pointer to created node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	int balance;
	avl_t *new, *root;

	if (!tree)
		return (NULL);

	new = malloc(sizeof(avl_t));
	new->n = value;
	if (!new)
		return (NULL);
	if (!*tree)
		return (new);
	root = *tree;
	if (value < root->n)
		root->left  = avl_insert(&root->left, value);
	else if (value > root->n)
		root->right = avl_insert(&root->right, value);
	else
		return (new);

	balance = avl_balance(root);

	if (balance > 1 && value < root->left->n)
		return (right_rotate(root));
/* Right Right Case*/
	if (balance < -1 && value > root->right->n)
		return (left_rotate(root));
/* Left Right Case*/
	if (balance > 1 && value > root->left->n)
	{
		root->left = left_rotate(root->left);
		return (right_rotate(root));
	}
/* Right Left Case */
	if (balance < -1 && value < root->right->n)
	{
		root->right = right_rotate(root->right);
		return (left_rotate(root));
	}
	return (root);
}
