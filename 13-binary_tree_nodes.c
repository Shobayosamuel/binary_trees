#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num, left, right;

	if (tree)
	{
		left = 1 + binary_tree_nodes(tree->left);
		right = 1 + binary_tree_nodes(tree->right);
	}
	num = left > right ? left : right;
	return (num);
}
