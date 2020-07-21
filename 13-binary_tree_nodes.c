#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *Return: If tree is NULL return 0, otherwise return nodes count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->left || tree->right) ?
		1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) : 0);
}
