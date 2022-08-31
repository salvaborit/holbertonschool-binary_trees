#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL, *otherNode = NULL;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->parent = parent;
	}
	else if (parent->right)
	{
		otherNode = parent->right;
		newNode->right = otherNode;
		otherNode->parent = newNode;
		parent->right = newNode;
		otherNode->left = otherNode->right = NULL;
	}
	newNode->parent = parent;

	return (newNode);
}
