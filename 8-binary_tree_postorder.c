#include "binary_trees.h"

/**
 * binary_tree_postorder - also traverses a tree
 * @tree: pointer to the root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: nuffin
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
