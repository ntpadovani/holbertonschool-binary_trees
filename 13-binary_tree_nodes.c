#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to tree root
 *
 * Return: size_t count number of nodes that have t least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* check for tree */
	if (!tree)
		return (0);
	/* if node has a child it counts */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
