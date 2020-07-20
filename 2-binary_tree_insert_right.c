#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Is a pointer to the node to insert the right-child in
 * @value: Is the value to store in the new node
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!parent || !node)
		return (NULL);

	node->right = parent->right;
	parent->right = node;
	node->parent = parent;

	if (node->right)
		node->right->parent = node;

	return (node);
}
