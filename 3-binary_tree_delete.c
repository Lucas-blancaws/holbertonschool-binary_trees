#include "binary_trees.h"
/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: Pointeur vers la racine de l'arbre binaire à supprimer
 * Return: neant
 */
void binary_tree_delete(binary_tree_t *tree)
{
  /* Si l'arbre est NULL, il n'y a rien à supprimer */
  if (tree == NULL)
    return;

  /* Supprime récursivement les sous-arbres gauche et droit */  
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  
  /* Libère la mémoire du nœud actuel */
  free(tree);
}
