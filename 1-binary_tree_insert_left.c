#include "binary_trees.h"

/**
  * binary_tree_insert_left - write a function that will inserts
  * a node as the left-child of another node.
  * @parent: ptr to the node to insert the left_child in it.
  * @value: the value to insert int he new node and save inside it.
  *
  * Return: a ptr to the newly created node or NULL in case it fails.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
