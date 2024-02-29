#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node
 * Return: 1 if root node, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
