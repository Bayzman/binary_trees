#include "binary_trees.h"

/**
 * helper_function - checks if a binary tree is perfect
 * @tree: pointer to the tree
 * @is_perfect: pointer to a boolean variable
 * Return: height of the tree
 */

size_t helper_function(const binary_tree_t *tree, bool *is_perfect)
{
	int hl;
	int hr;
	bool perfect_left;
	bool perfect_right;

	perfect_left = false;
	perfect_right = false;

	if (!tree)
	{
		*is_perfect = true;
		return (0);
	}

	hl = helper_function(tree->left, &perfect_left);
	hr = helper_function(tree->right, &perfect_right);

	if (hl == hr && perfect_left == perfect_right)
		*is_perfect = true;
	else
		*is_perfect = false;

	return (1 + (hl > hr ? hl : hr));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the tree
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl;
	int hr;
	bool perfect_left;
	bool perfect_right;

	if (!tree)
		return (0);

	hl = helper_function(tree->left, &perfect_left);
	hr = helper_function(tree->right, &perfect_right);

	if (hl == hr && perfect_left == perfect_right)
		return (1);

	return (0);
}
