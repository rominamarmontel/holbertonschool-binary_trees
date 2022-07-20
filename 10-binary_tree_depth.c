#include "binary_trees.h"
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
	{
		tree = tree->parent;
	}
	return (i);
}
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: 0 if tree is NULL
 *
 * Function that measures the depth of a node
 *              in a binary tree with a recursive way
 * size_t binary_tree_depth(const binary_tree_t *tree)
 * {
 * int depth = 0;
 * if (tree == NULL)
 * {
 * return (0)
 * }
 * +1 to get the height of the tree recursivly
 *if (tree->parent && tree->parent != NULL)
 * depth += 1 + binary_tree_depth(tree->parent);
 *return (depth);
 * }
 **/
