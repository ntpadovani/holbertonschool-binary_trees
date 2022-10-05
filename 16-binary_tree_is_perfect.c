#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * 1) All leaves are at same level
 * 2) All internal nodes have two childre
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* if tree is null return 0 */
	if (!tree)
		return (0);
	/* if one node, it's perfect */
	if (!tree->left && !tree->right)
		return (1);
	/* if different heights it's not perfect */
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	/* if all it satisfied on recursive calls */
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
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
