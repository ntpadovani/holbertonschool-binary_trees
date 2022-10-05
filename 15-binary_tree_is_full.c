#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * which means every node has 0 or 2 children.
 * @tree: Pointer to tree's root
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)/* check for tree */
		return (0);

	if (!tree->left && !tree->right)/* check every branch*/
		return (1);
	if (!tree->left || !tree->right)
		return (0);
    /* return true or false- true only if both are true*/
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
