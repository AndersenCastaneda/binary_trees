#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent || !node)
		return (NULL);

	node->n = value;
	node->left = parent->left;
	node->right = NULL;
	node->parent = parent;
	parent->left = node;

	if (node->left)
		node->left->parent = node;

	return (node);
}
