#include "binary_trees.h"

/**
* binary_tree_leaves - Compte le nombre de feuilles dans un arbre binaire
* @tree: pointeur vers la racine de l’arbre
*
* Return: nombre de feuilles, ou 0 si tree est NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
