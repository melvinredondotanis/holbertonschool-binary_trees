#include "binary_trees.h"

/**
  * binary_tree_nodes - Write a function that counts
  * the nodes with at least 1 child in a binary tree.
  * @tree: the tree.
  * Return: if the tree is NULL, rtrn 0, otherwise
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return ((left_nodes +  right_nodes) + 1);
	}

	else
	{
		return (left_nodes + right_nodes);
	}

}

