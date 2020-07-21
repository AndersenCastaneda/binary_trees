#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Is a pointer to the node to measure the depth
 * Return: If tree is NULL retun 0, otherwise depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	/**
	*	//Whit recursion
	*	if (tree->parent)
	*		depth = 1 + binary_tree_depth(tree->parent);
	*
	*	//Whit recursion and ternary operator
	*	depth = (tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	*/

	/*Normal Loop*/
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
