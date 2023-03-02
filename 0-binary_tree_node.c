#include "binary_trees.h"

/**
 * binary_tree_node - to add to a new node
 * Return: the new node on success
 * @value: new node value
 * @parent: pointer to the parent node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
