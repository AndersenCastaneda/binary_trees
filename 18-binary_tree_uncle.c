#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Is a pointer to the node to find the uncle
 * Return: If node is NULL or If node has no uncle return NULL,
 * otherwise return uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
