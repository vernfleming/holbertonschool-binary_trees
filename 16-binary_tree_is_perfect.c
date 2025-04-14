#include "binary_trees.h"

/**
 * leftmost_leaf_depth - figures out depth of left side
 * @tree: pointer to marker to measure depth
 *
 * Return: depth of the node or 0 if fail/null
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
 * is_perfect_recursive - recursively checks if a tree is perfect
 * @tree: pointer to the current node
 * @depth: depth of tree
 * @level: level of tree
 *
 * Return: 1 if perfect else 0
 */
static int is_perfect_recursive(const binary_tree_t *tree,
				int depth, int level)
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
 * binary_tree_is_perfect - checks if a binary tree is perfecto
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = leftmost_leaf_depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
