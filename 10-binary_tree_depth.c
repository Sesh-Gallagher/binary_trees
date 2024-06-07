#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0, else return depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_size = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth_size++;
		tree = tree->parent;
	}

	return (depth_size);

}
