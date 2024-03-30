#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value to store in the node to be inserted.
 *
 * Return: pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *c, *new;

	if (tree)
	{
		c = *tree;

		if (!c)
		{
			new = binary_tree_node(c, value);
			if (!new)
				return (NULL);
			return (*tree = new);
		}

		if (value < c->n)
		{
			if (c->left != NULL)
				return (bst_insert(&c->left, value));

			new = binary_tree_node(c, value);
			if (!new)
				return (NULL);
			return (c->left = new);
		}
		if (value > c->n)
		{
			if (c->right != NULL)
				return (bst_insert(&c->right, value));
			new = binary_tree_node(c, value);
			if (!new)
				return (NULL);
			return (c->right = new);
		}
	}
	return (NULL);
}
