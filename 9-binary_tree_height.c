#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to root node of the tree being measured
 *
 * Return: height of tree or 0 if fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
