#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree again but differently
 * @tree: pointer to root node of our tree
 * @func: pointer to function to call nodes
 *
 * Return: nada
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
