#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Is a pointer to the root node of the tree to check
 * Return: If tree is NULL or not full return 0, otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right)) ? 1 : 0);
}
