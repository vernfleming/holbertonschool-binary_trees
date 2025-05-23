#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: pointer to root node of the tree being deleted
 *
 * Return: nada
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
