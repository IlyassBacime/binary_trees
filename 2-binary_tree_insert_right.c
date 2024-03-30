#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right child
 * @parent: pointer to node to insert right child
 * @value: value to store in new node
 * Return: If parent NULL return NULL. Otherwise point to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
