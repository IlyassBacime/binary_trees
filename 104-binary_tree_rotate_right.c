#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p, *t;

	if (!tree || tree->left == NULL)
		return (NULL);

	p = tree->left;
	t = p->right;
	p->right = tree;
	tree->left = t;
	if (t)
		t->parent = tree;
	t = tree->parent;
	tree->parent = p;
	p->parent = t;
	if (t)
	{
		if (t->left == tree)
			t->left = p;
		else
			t->right = p;
	}
	return (p);
}
