#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: 0 if tree is NULL
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
		return (0);
	for (i = 0; tree->parent; i++)
		tree = tree->parent;
	return (i);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: return a pointer to the lowest common ancestor node
 * Otherwise: if no ancestor, return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t depth_f = binary_tree_depth(first);
	size_t depth_s = binary_tree_depth(second);

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (depth_f < depth_s)
		return (binary_trees_ancestor(first, second->parent));

	else if (depth_f > depth_s)
		return (binary_trees_ancestor(first->parent, second));

	return (binary_trees_ancestor(first->parent, second->parent));
}
