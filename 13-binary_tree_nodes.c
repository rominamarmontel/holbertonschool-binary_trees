#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL || (tree->left == NULL && tree->right == NULL)) // there is no children or no node>pas de branche
        return (0);
    else // there is one or two children>il y a des branche
        return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
