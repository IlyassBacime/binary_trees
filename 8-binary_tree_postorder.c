#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree use post-order traversal.
 * @tree: pointer to root of tree
 * @func: pointer to func to call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
