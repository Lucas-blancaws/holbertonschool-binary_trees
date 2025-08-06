#include "binary_trees.h"
/**
 * binary_tree_sibling - Trouver frere ou sœur d'un nœud
 * @node: Pointeur vers le nœud dont on veut trouver le frere
 * Return: Pointeur vers le frere ou la sœur, NULL si aucun
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
  binary_tree_t *parent = NULL;

  /* Verifie si le nœud est NULL */
  if (node == NULL)
  {
    return (NULL);
  }

  /* On recupere le parent du noeud */
  parent = node->parent;

  /* Verifie si le parent est NULL */
  if (node->parent == NULL)
  {
    return (NULL);
  }

  /* Si nœud = fils gauche, on renvoie le fils droit */
  if (parent->left == node)
  {
    return (parent->right);
  }

  /* Si nœud = fils droit, on renvoie le fils gauche */
  if (parent->right == node)
  {
    return (parent->left);
  }

  /* Si aucune des conditions n'est remplie, frere non trouve */
  return (NULL);
}
