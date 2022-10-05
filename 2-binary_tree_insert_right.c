#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	if (!parent) /* check that parent is not NULL */
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (!right_child) /* check for malloc fails */
		return (NULL);
	if (parent->right) /* check for existing right child */
	{
		right_child->right = parent->right;
		right_child->right->parent = right_child;
	}
	parent->right = right_child;
	return (right_child);
}
