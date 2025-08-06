#include "binary_trees.h"

/**
* binary_tree_height - Calcule la hauteur d’un arbre binaire
* @tree: Pointeur vers la racine
* Return: Hauteur, ou 0 si NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
/**
* binary_tree_balance - Calcule le facteur d’équilibre d’un arbre binaire
* @tree: Pointeur vers la racine de l’arbre
* Return: Facteur d’équilibre (hauteur gauche - hauteur droite)
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
