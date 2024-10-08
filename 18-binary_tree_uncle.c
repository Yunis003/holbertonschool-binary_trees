#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of binary tree.
 * @node: The binary tree
 *
 * Return: Pointer to the uncle node,
 *	NULL if fails.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *new_node;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	new_node = node->parent->parent;
	if (new_node->left == node->parent)
	{
		return (new_node->right);
	}
	else
	{
		return (new_node->left);
	}
}
