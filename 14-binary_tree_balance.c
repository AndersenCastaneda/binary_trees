#include "binary_trees.h"
#include <stdio.h>
/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, otherwise return the height
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);
	if (left > right)
		return (1 + left);

	return (1 + right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL return 0, otherwise balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);
	return (left - right);
}
