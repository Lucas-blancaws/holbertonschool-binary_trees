#include "binary_trees.h"
/**
 * binary_tree_inorder - Parcourt un arbre binaire en parcours in-order
 * @tree: Pointeur vers la racine de l'arbre binaire à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 * Return: neant
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
  /* Vérifie si l'arbre ou la fonction est NULL */
  if (tree == NULL || func == NULL)
  {
    return;
  }
  
  /* Parcourt récursivement le sous-arbre gauche */
  binary_tree_inorder(tree->left);

  /* Applique la fonction au nœud actuel */
  func(tree->n);

  /* Parcourt récursivement le sous-arbre droit */
  binary_tree_inorder(tree->right);
}
