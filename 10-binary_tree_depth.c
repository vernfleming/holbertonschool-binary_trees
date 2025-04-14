#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of our node or 0 if fail
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
