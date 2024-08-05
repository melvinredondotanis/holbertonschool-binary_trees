#include "binary_trees.h"

/**
  * binary_tree_inorder - Write a function that
  * goes through a binary tree using in-order traversal
  * @tree: ptr to the root of the tree we want to explore.
  * @func: ptr to a func to call for each node.
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, func);
	}

	func(tree->n);

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, func);
	}
}
