#include "binary_trees.h"

/**
  * binary_tree_height - Write a function that measures
  * the height of a binary tree...
  * @tree: is a ptr to the root node of the tree to
  * measure its height.
  *
  * Return: the height (hgt) of the tree or 0.
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hgt = 0, right_hgt = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_hgt = binary_tree_height(tree->left) + 1;
	}

	if (tree->right != NULL)
	{
		right_hgt = binary_tree_height(tree->right) + 1;
	}

	return (left_hgt >= right_hgt ? left_hgt : right_hgt);

}
