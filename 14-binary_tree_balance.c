#include "binary_trees.h"

/**
 * binary_tree_balance - Write a function that measures
 * the balance factor of a binary tree.
 * @tree: is a ptr to the root node of the tree to measure
 * the balance factor.
 *
 * Return: the balance factor of the tree or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_hgt = 0, right_hgt = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_hgt = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_hgt = binary_tree_height(tree->right) + 1;

	return (left_hgt - right_hgt);
}
