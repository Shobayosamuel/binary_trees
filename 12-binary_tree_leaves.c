#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in the tree
 * @tree: Pointer to the root node of the tree
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree)
	{
		num = 1 + binary_tree_leaves(tree->left);
		num = 1 +  binary_tree_leaves(tree->left);

	}
	return (num);
}
