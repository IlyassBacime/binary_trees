#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root of tree
 * @node: pointer to node to check
 *
 * Return: If node is root return 1 otherwise return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
