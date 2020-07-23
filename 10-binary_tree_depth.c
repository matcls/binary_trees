#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: input b-tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
