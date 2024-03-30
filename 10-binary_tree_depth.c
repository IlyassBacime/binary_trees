#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node in a binary tree.
 * @tree: pointer to node to measure the depth.
 *
 * Return: if tree NULL, function must return 0, otherwise return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
