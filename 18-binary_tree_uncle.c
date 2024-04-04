#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 * Return: Pointer to the uncle node, or NULL if no uncle or node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}
		else if (grandparent->right == parent)
	{
		return (grandparent->left);
	{
		else
	}
	return (NULL);
	}
}

