#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));/* allocate memory for newnode */
	if (!new_node) /* check if root empty */
		return (NULL);

	new_node->parent = parent; /* Store value n in newnode */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
