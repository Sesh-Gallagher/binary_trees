#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if node is a leaf of a binary tree
 * @node: pointer to the node that has to be checked
 *
 * Return: if node is leaf -1. otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
