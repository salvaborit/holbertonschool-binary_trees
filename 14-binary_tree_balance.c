#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree)
	{
		if (tree->left)
			leftHeight = 1 + binary_tree_height(tree->left);
		if (tree->right)
			rightHeight = 1 + binary_tree_height(tree->right);

		// printf("heights(l r) = %d %d\n", leftHeight, rightHeight);

		return (leftHeight - rightHeight);
	}
	return (0);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (my_binary_tree_height(tree) - 1);
}

/**
 * my_binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree
 */
size_t my_binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree->left)
		leftHeight = my_binary_tree_height(tree->left);
	if (tree->right)
		rightHeight = my_binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	return (rightHeight + 1);
}