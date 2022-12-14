#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a tree
 * @tree: Pointer to tree's root
 *
 * Return: Trees' height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (!tree)/* tree is null */
		return (0);

	if (tree->left) /* measure both */
		hleft = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hright = 1 + binary_tree_height(tree->right);

	if (hleft > hright)/* compare and return tallest */
		return (hleft);
	return (hright);
}
