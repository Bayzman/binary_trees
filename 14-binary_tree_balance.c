#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else return the balance factor
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0;
	int hr = 0;
	int bf = 0;

	if (!tree)
	{
		return (0);
	}

	hl += 1 + binary_tree_balance(tree->left);
	hr += 1 + binary_tree_balance(tree->right);

	bf = hl - hr;

	return (bf);
}
