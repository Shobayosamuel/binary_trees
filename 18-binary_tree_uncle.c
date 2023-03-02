#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of the node
 * @node: A pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle or NULL on failure.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (node == NULL || !(node->parent))
		return (NULL);
	parent = node->parent;
	uncle = binary_tree_sibling(parent);
	return (uncle);
}

/**
 * binary_tree_sibling - A function that finds the sibling of the given node
 * @node: A pointer to the node to find the sibling
 * Return: If it has a sibling, NULL, otherwise pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	parent = node->parent;
	if ((parent->left) && (parent->right))
	{
		if (node == parent->left)
			return (parent->right);
		return (parent->left);
	}
	return (NULL);
}
