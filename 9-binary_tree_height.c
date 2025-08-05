#include "binary_trees.h"
/**
 * binary_tree_height - Mesurer la hauteur d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre binaire
 * Return: La hauteur de l'arbre binaire, 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  int right, left;

  /* Si l'arbre est NULL, retourne 0 */
  if (tree == NULL)
  {
    return (0);
  }
  
  /* Si l'arbre n'a pas de sous-arbres, retourne 0 */
  if (tree->left == NULL && tree->right == NULL)
  {
    return (0);
  }

  /* Calcule la hauteur des sous-arbres gauche et droit */
  left = binary_tree_height(tree->left);
  right = binary_tree_height(tree->right);

  /* Retourne la hauteur maximale entre les deux sous-arbres, + 1 */
  return ((left > right ? left : right) + 1);
}
