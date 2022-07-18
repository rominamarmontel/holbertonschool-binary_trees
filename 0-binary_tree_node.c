#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node -function that creates a binary tree node
 *@parent:  Pointer to the parent of the node to create
 *@value: Value of the new node ,The value to store into the new node.
 *Return: NULL if failure occured or parent is null.
 *Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
