#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL || node->parent->parent->parent == NULL)
		return (NULL);

	if (node == node->parent->parent->parent->left && node->NULL)
		return (node->parent->parent->parent->right);
	return (node->parent->parent->left);
}
