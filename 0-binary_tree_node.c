#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: This is a pointer to the parent of the node to create.
 * @value: This is the  value to put in the new node.
 *
 * Return: pointer to the new node
 * otherwise - NULL if failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
