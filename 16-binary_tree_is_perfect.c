#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not perfect, 0, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}

/**
 * binary_tree_height - get the height of the tree
 * @tree: root node of the tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		left = 0;
		right = 0;
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
