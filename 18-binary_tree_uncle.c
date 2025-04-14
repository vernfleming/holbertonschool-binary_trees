#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node with the uncle
 *
 * Return: pointer to uncle node or NULL if fail
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent && grandparent->right)
		return (grandparent->right);

	if (grandparent->right == parent && grandparent->left)
		return (grandparent->left);

	return (NULL);
}
