#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree
 * @func: pointer to a func to call for each node. The value in the node is passed as
 * a parameter to this func.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func are NULL, return */
	if (!tree || !func)
		return;
	/* call func on the value */
	func(tree->n);
	/* call b_t_p on the left child */
	binary_tree_preorder(tree->left, func);
	/* call b_t_p on the right child */
	binary_tree_preorder(tree->right, func);
}
