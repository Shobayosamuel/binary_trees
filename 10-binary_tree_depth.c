#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pinter to the node
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);
	while (temp->parent)
	{
		num++;
		temp = temp->parent;
	}
	return (num);
}
