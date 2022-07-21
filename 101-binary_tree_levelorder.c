#include "binary_trees.h"
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
 * @tree: a pointer to the(tree node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
		return (getMax(left_height, right_height));
}
/**
 * printCurrentLevel - print a current level
 * @tree: a pointer to the tree node
 * @func: a pointer to a function to call for each node
 * @level: level of depth(int)
 * Return: Nothing
 */
void printCurrentLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printCurrentLevel(tree->left, level - 1, func);
		printCurrentLevel(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - goes through using level-order traversal
 * @tree: a pointer to the(tree node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: Nothing
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = binary_tree_height(tree);
	int i;

	if (tree == NULL || func == NULL)
		return;
	for (i = 1; i <= h; i++)
		printCurrentLevel(tree, i, func);
}
