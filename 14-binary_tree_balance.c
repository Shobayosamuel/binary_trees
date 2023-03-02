#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	if (tree)
	{
		left += (tree->left) ? 1 : 0;
		right += (tree->right) ? 1 : 0;
		binary_tree_balance(tree->left);
		binary_tree_balance(tree->right);
	}
	return ((left > right) ? (left - right) : (right - left));
}
