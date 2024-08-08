#include "binary_trees.h"

/**
 * tree_stats - measures the size and height of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * @n: node depth
 * @height: pointer to the variable to store the height
 * @leaves: pointer to the variable to store the leaves
 * Return: void
 */
void tree_verif(const binary_tree_t *tree, size_t n,
				size_t *leaves, size_t *height)
{
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (leaves != NULL)
				(*leaves)++;
			if ((height != NULL) && (n > *height))
				*height = n;
		}
		else
		{
			tree_verif(tree->left, n + 1, leaves, height);
			tree_verif(tree->right, n + 1, leaves, height);
		}
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t count = 0, height = 0;

	tree_verif(tree, 0, &count, &height);
	return ((int)count == (1 << height) ? 1 : 0);
}
