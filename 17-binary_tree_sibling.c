#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds a node's sibling
 * @node: Pointer to tree's node
 *
 * Return: Pointer to node's sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
    /* if no node or no parent, return NULL */
	if (!node || !node->parent)
		return (NULL);
    /* otherwise, if this is the left child, return the right, or vice versa */
	parent = node->parent;
	if (node == parent->left)
		return (parent->right);

	return (parent->left);
}
