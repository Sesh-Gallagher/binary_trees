#include "binary_trees.h"

/**
 * binary_tree_insert_right -  Inserts a node to the right child
 * @parent: The pointer to the node to insert the right child
 * @value: Data to be stored in new node
 * Return: If parent node is Null or error, return pointer to a new node
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new =  binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right  = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
