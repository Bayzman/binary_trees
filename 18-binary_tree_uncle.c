#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks Uncle node in a binary tree
 * @node: pointer to node to find the uncle
 * Return: pointer to the node with uncle, or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *granparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	granparent = parent->parent;

	if (granparent->left == parent)
		return (granparent->right);

	else
		return (granparent->left);
}
