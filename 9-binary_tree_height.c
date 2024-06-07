#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H
	size_t right_H

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_H = binary_tree_height(tree->left);
	right_H = binary_tree_height(tree->right);

	if (left_H > right_H)
		return (left_H + 1);
	else
		return (right_H + 1);
}
