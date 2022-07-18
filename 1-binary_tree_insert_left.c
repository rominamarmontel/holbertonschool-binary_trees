#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent:a pointer to the parent node
 * @value:value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 * Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
