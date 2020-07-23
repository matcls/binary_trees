#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks node is leaf
 * @node: pointer input
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);
}
