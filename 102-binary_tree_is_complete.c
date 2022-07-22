#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
 * isComplete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: index of node
 * @number_nodes: the size of a binary tree
 * Return: 0 if tree is NULL
 */
int isComplete(const binary_tree_t *tree,
unsigned int index, unsigned int number_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);

	return (isComplete(tree->left, 2 * index + 1, number_nodes) &&
			isComplete(tree->right, 2 * index + 2, number_nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int node_count = binary_tree_size(tree);
	int index = 0;

	if (tree == NULL)
		return (0);

	if (isComplete(tree, index, node_count) == 0)
		return (0);
	return (1);
}
