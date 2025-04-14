#include "binary_trees.h"

/**
 * depth - Computes the depth of the leftmost leaf
 * @tree: Pointer to the root node
 *
 * Return: depth of the leftmost leaf
 */
static int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect_recursive - Helper to check if tree is perfect
 * @tree: Pointer to current node
 * @depth_val: Required leaf depth
 * @level: Current depth level
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect_recursive(const binary_tree_t *tree, int depth_val, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth_val == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, depth_val, level + 1) &&
	        is_perfect_recursive(tree->right, depth_val, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
