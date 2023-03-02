#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the tree is full
 * @tree: pointer to the root node
 * Return: Return 0 if true and 1 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left && tree->right)
		return ((binary_tree_is_full(tree->left)) &&
				binary_tree_is_full(tree->right));
	return (0);
}
