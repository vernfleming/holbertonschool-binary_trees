#include "binary_trees.h"

/**
 * leftmost_leaf_depth - Computes the depth of the leftmost leaf
 * @tree: Pointer to the node to measure depth from
 *
 * Return: Depth of the node, or 0 if NULL
 */
static int leftmost_leaf_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect_recursive - Recursively checks if a tree is perfect
 * @tree: Pointer to the current node
 * @depth: Expected depth of all leaves
 * @level: Current level in the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
	        is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = leftmost_leaf_depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
