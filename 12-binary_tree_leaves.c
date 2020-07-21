#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL return 0, otherwise count of the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->left && tree->right) ?
		binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) : 1);
}
