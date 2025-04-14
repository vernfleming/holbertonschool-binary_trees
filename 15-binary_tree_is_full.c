#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node
 *
 * Return: 1 if the tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If it's a leaf, it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, check recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If only one child exists */
	return (0);
}
