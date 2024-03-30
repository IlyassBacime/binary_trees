#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left child of another
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: If parent = NULL return NULL. Otherwise pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
