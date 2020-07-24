#include "binary_trees.h"

/**
 * binary_trees_ancestor - find Lowest common ancestor
 * @f: binary_tree_t
 * @s: binary_tree_t
 * Return: LCA
 */
bst_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	const bst_t *tmp = NULL, *tmp_ = NULL;
	unsigned int depthf = 0, depths = 0, i = 0;

	if (!f || !s)
		return (NULL);
	for (tmp = f; tmp->parent; tmp = tmp->parent)
		depthf++;
	for (tmp_ = s; tmp_->parent; tmp_ = tmp_->parent)
		depths++;
	tmp = f;
	tmp_ = s;
	if (depths > depthf)
	{
		for (i = 0; i < (depths - depthf); i++)
			tmp_ = tmp_->parent;
	}
	else if (depthf > depths)
	{
		for (i = 0; i < (depthf - depths); i++)
			tmp = tmp->parent;
	}
	if (tmp == tmp_)
		return ((bst_t *)tmp);
	for (; tmp_ && tmp; tmp_ = tmp_->parent)
	{
		if (tmp_ == tmp)
			return ((bst_t *)tmp_);
		tmp = tmp->parent;
	}
	return (NULL);
}
