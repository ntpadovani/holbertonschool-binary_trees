#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node on the parent's left side
 * @parent: Pointer to parent node
 * @value: New node's data
 *
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child = NULL;

	if (!parent) /* check that parent is not NULL */
		return (NULL);

	left_child = binary_tree_node(parent, value); /* calling function */
	if (!left_child) /* check for malloc fails */
		return (NULL);
	if (parent->left) /* check for existing left child */
	{
		left_child->left = parent->left;
		left_child->left->parent = left_child;
	}
	parent->left = left_child;
	return (left_child);
}
