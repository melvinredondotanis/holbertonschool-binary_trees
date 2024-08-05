#include "binary_trees.h"

/**
  * binary_tree_delete - write a function that
  * deletes an entire binary tree.
  * @tree: ptr to the tree we want to delete.
  *
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}

	free(tree);

}
