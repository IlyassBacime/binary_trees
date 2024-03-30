#include "binary_trees.h"
/**
 * binary_tree_inorder - use in-order
 * @tree: pointer to root
 * @func: pointer to function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
