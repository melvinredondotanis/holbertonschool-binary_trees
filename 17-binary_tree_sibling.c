#include "binary_trees.h"

/**
  * binary_tree_sibling - Write a function that
  * finds the sibling of a node.
  * @node: is a ptr to the node to find the sibling.
  * Return: NULL if node or parent is NULL AND
  * if node has no sibling return NULL.
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	return (NULL);
}
