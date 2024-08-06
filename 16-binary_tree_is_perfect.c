#include "binary_trees.h"

/**
 * binary_tree_height - Write a function that measures
 * the height of a binary tree...
 * @tree: is a ptr to the root node of the tree to
 * measure its height.
 *
 * Return: the height (hgt) of the tree or 0.
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int left_hgt = 0, right_hgt = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_hgt = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_hgt = binary_tree_height(tree->right) + 1;
	return (left_hgt >= right_hgt ? left_hgt : right_hgt);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (binary_tree_is_perfect(tree->left) == 0 &&
			binary_tree_is_perfect(tree->right) == 0)
			return (1);
	}
	return (0);
}
