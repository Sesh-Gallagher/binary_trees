#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is not perfect, 1 if tree is perfect.
 * 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t power = 0
	size_t power = 0
	size_t height = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	nodes = binary_tree_size(tree);
	height = binary_tree_height(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);

}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t height_l = 0;
		size_t height_r = 0;

		if (!tree)
			return (0);

		height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0.
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 *_pow_recursion - Function that returns value of a raised to the power of b
 *@a: is the value to exponentiate
 *@b: is the power to raise x to
 *Return: a to the power of b, or -1 if b is negative
 *
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));

}
