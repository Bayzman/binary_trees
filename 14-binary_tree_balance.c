#include "binary_trees.h"

/**
 * binary_tree_h - determine the height of a binary tree
 * @tree: pointer to the tree
 * Return: int
 */

size_t binary_tree_h(const binary_tree_t *tree)
{
	int l;
	int r;

	l = 0;
	r = 0;

	if (tree)
	{
		if (tree->left)
		{
			l = 1 + binary_tree_h(tree->left);
		}
		if (tree->right)
		{
			r = 1 + binary_tree_h(tree->right);
		}
	}

	else
		return (-1);

	if (l > r)
		return (l);
	else
		return (r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else return the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hl;
	int hr;
	int bf;

	if (tree == NULL)
		return (0);

	hl = binary_tree_h(tree->left);
	hr = binary_tree_h(tree->right);
	bf = (hl - hr);

	return (bf);
}
