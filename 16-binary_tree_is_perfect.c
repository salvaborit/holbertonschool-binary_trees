#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}


/**
* binary_tree_is_perfect - check if tree is perfect
* @tree: pointer
* Return: 0 if its not perfect , 1 if its perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1)
		if (binary_tree_size(tree->left) - binary_tree_size(tree->right) == 0)
			return (1);
	return (0);
}
