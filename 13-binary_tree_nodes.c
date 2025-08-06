#include "binary_trees.h"
/**
* binary_tree_nodes - Compte le nombre de nœuds avec au moins un enfant
* dans un arbre binaire
* @tree: Pointeur vers la racine de l'arbre binaire
* Return: Nombre nœuds avec au moins un enfant, 0 si l'arbre est NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
/* Vérifie si l'arbre est NULL */
if (tree == NULL)
{
	return (0);
}

/* Si le nœud a au moins un enfant, ajoute 1 et compte récursivement */
if (tree->left != NULL || tree->right != NULL)
{
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
else
{
	/* Si le nœud n'a pas d'enfant, continue le parcours récursif */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
}
