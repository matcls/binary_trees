#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree one node to the left
 * @tree: binary_tree_t
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree || !tree->right)
		return (NULL);

	tree->parent = tree->right;
	tree->right = tree->parent->left;
	tree->parent->left = tree;

	if (tree->right)
		tree->right->parent = tree;

	tree->parent->parent = NULL;

	return (tree->parent);
}
