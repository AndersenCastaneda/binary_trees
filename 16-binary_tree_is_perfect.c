#include "binary_trees.h"

/**
 * _binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int _binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, otherwise return the height
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = (tree->left) ? 1 + _binary_tree_height(tree->left) : 0;
	right = (tree->right) ? 1 + _binary_tree_height(tree->right) : 0;
	return ((left > right) ? left : right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Is a pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);

	left = tree->left;
	right = tree->right;

	if (_binary_tree_is_leaf(tree))
		return (1);

	if (!left || !right)
		return (0);

	if (_binary_tree_height(left) == _binary_tree_height(right))
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);

	return (0);
}
