#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!parent || !node)
		return (NULL);

	node->left = parent->left;
	parent->left = node;
	node->parent = parent;

	if (node->left)
		node->left->parent = node;

	return (node);
}
