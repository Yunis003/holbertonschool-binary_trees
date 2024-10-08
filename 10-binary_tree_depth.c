#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while  (tree->parent != NULL)
	{
		++x;
		tree = tree->parent;
	}
	return (x);
}
