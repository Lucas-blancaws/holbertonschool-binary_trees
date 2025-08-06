#include "binary_trees.h"
/**
* binary_tree_is_full - Verifie si un arbre binaire est plein
* @tree: Pointeur vers la racine de l'arbre a verifier
* Return: 1 si l'arbre est plein, sinon 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int left, right;

/* Verifie si l'arbre est NULL */
if (tree == NULL)
{
	return (0);
}

/* Si l'arbre n'a pas d'enfants, il est plein */
if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}

/* Si l'arbre a un seul enfant, il n'est pas plein */
if (tree->left == NULL || tree->right == NULL)
{
return (0);
}

/* Verifie récursivement les sous-arbres gauche et droit */
left = binary_tree_is_full(tree->left);
right = binary_tree_is_full(tree->right);

/* Si les deux sous-arbres sont pleins, l'arbre est plein */
if (left == 1 && right == 1)
{
	return (1);
}
/* Si l'un des sous-arbres n'est pas plein, l'arbre n'est pas plein */
return (0);
}
