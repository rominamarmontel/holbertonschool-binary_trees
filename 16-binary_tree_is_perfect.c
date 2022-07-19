#include "binary_trees.h"
#include <stdlib.h>
/**
 * getMax - function that return the max between 2 int
 * @a: 1er int (size left)
 * @b: secound int (size right)
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
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/** +1 to get the height of the tree recursivly**/
	if (tree->left && tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right && tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	/** return getMax(left_height, right_height);**/
	return (getMax(left_height, right_height));
}
/**
 * exponent - pow
 * @x: 1er int
  *@n: 2nd int
 * Return: pow
 */
int exponent(int x, int n)
{
	int pow = 1;
	int i = 0;

	for (i = 0; i < n; i++)
		pow *= x;
	return (pow);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int num = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	num = binary_tree_nodes(tree);
	if (num == exponent(2, height) - 1)
		return (1);
	else
		return (0);
}
