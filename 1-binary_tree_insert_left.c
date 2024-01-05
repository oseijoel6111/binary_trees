#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the n node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL){
		return (NULL);
	}

	n = binary_tree_node(parent, value);
	if (n == NULL){
		return (NULL);
	}

	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;

	return (n);
}
