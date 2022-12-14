#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * The node which does not have any child node is called the leaf node
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf,
 * otherwise return true if neither left or right leaves exist.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)/* if node is null return 0 */
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
