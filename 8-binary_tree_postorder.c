#include "binary_trees.h"

/**
* binary_tree_postorder - Parcours post-ordre d’un arbre binaire
* @tree: racine de l’arbre à parcourir
* @func: fonction à appeler avec la valeur de chaque nœud
*
* Visite : gauche -> droite -> racine
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
