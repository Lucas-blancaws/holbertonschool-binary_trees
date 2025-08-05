#include "binary_trees.h"
/**
* binary_tree_preorder - Parcours préfixe d’un arbre binaire
* @tree: racine de l’arbre à parcourir
* @func: fonction à appeler avec la valeur de chaque nœud
*
* Visite : racine -> gauche -> droite
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
