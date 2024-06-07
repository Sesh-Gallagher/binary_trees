#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_trees_delete(tree->left);
		binary_trees_delete(tree->right);
		free(tree);
	}
}
