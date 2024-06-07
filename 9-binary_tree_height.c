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
	if (tree)
	{
		size_t a = 0, b = 0;

		a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((a > b) ? 1 : b);
	}
	return (0);
}
