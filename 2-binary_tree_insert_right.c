#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = binary_tree_node(parent, value);

	if (parent == NULL || new_tree == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_tree->right = parent->right;
		parent->right->parent = new_tree;
	}
	parent->right = new_tree;
	return (new_tree);
}
