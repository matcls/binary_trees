#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node left-child of another node
 * @parent: pointer
 * @value: input
 * Return: pointer new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	node->right = NULL;

	if (!parent->left)
	{
		node->left = NULL;
		parent->left = node;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		parent->left = node;
	}
	return (node);
}
