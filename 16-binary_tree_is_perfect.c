#include "binary_trees.h"

/**
 * binary_tree_height - helper binary_tree_height
 * @tree: input tree
 * Return: height tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if b-tree is perfect
 * @tree: tree
 * Return: height of tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
