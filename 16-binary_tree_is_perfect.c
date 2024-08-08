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
		return (0);

	if (tree->left != NULL)
		left_hgt = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_hgt = binary_tree_height(tree->right) + 1;

	return (left_hgt >= right_hgt ? left_hgt : right_hgt);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height == right_height)
		return (1);

	return (0);
}
