#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *granma, *pops;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	granma = first->parent, pops = second->parent;
	if (first == pops || !granma || (!granma->parent && pops))
		return (binary_trees_ancestor(first, pops));
	else if (granma == second || !pops || (!pops->parent && granma))
		return (binary_trees_ancestor(granma, second));
	return (binary_trees_ancestor(granma, pops));
}
