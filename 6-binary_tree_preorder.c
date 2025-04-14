#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree
 * @tree: pointer to root node of our tree
 * @func: pointer to function to calls each node
 *
 * Return: niente
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
