#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL, *otherNode = NULL;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->left)
	{
		otherNode = parent->left;
		newNode->left = otherNode;
		otherNode->parent = newNode;
		otherNode->left = otherNode->right = NULL;
	}
	else if (parent->left == NULL)
		parent->left = newNode;
	newNode->parent = parent;

	return (newNode);
}
