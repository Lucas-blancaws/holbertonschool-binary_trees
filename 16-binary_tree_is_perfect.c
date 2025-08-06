#include "binary_trees.h"

/**
* binary_tree_height - Calcule la hauteur d’un arbre
* @tree: racine
* Return: hauteur, ou 0 si NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
* binary_tree_is_perfect - Vérifie si un arbre est parfait
* @tree: racine de l’arbre
* Return: 1 si parfait, 0 sinon ou si tree est NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;
	int left_perf, right_perf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h != right_h)
		return (0);

	left_perf = binary_tree_is_perfect(tree->left);
	right_perf = binary_tree_is_perfect(tree->right);

	return (left_perf && right_perf);
}
