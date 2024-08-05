#include "binary_trees.h"

/**
  * binary_tree_is_root - write a func that checks if
  * a given node is a root.
  * @node: check if the actual node is root.
  *
  * Return: 1 when node is a root, and 0 if not.
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->parent == NULL);
}
