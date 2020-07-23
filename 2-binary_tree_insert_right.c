#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node right-child of another node
 * @parent: pointer
 * @value: input
 * Return: pointer new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	if (!parent)
	{
		free(node);
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;

	if (!parent->right)
	{
		node->right = NULL;
		parent->right = node;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
	}
	return (node);
}
