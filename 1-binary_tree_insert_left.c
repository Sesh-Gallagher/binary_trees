#include "binary_trees.h"

/**
 * binary_tree_insert_left -  Inserts a node to the left child
 * @parent: The pointer to the node to insert the left child
 * @value: Data to be stored in new node
 * Return: If parent node is Null or error, return pointer to a new node
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new =  binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left  = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
