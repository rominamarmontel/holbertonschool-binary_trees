#include "binary_trees.h"
#include <stdlib.h>
/**
 * getMax - function that return the max between 2 int
 * @a: 1er int (size left)
 * @b:secound int (size right)
 * Return: the max between int a and b.
 */
int getMax(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
			return (getMax(left_height, right_height));
}
