#include "binary_trees.h"
/**
 * binary_tree_node - Tree node
 * @parent: Pointer
 * @value: Value
 * Return: If an error occurs return NULL. Otherwise a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
