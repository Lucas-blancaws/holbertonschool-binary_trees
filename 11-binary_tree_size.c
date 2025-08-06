#include "binary_trees.h"
/**
* binary_tree_size - Calcule la taille d'un arbre binaire
* @tree: Pointeur vers la racine de l'arbre binaire
* Return: La taille de l'arbre binaire, ou 0 si l'arbre est NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left, right;

/* Si l'arbre est NULL, retourne 0 */
if (tree == NULL)
{
	return (0);
}
/* Calcule recursivement la taille du sous-arbre gauche et droit */
left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);

/* Retourne le noeud actuel + la somme des tailles des sous-arbres */
return (1 + left + right);
}
