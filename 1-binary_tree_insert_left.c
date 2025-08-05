#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insère un nœud en tant qu'enfant gauche dans un arbre binaire
 * @parent: Pointeur vers le nœud parent où le nouveau nœud sera inséré
 * @value: Valeur à stocker dans le nouveau nœud
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec ou si le parent est NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
  binary_tree_t *new_node;
  binary_tree_t *old_left;

  /* Vérifie si le parent est NULL */
  if (parent == NULL)
    return (NULL);

  /* Alloue de la mémoire pour le nouveau nœud */
  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return (NULL);

  /* Initialise le nouveau nœud */
  new_node->n = value;
  new_node->parent = parent;
  new_node->left = NULL;
  new_node->right = NULL;
  
  /* Si le parent a déjà un enfant gauche, réorganise les liens */
if (parent->left != NULL)
{
    old_left = parent->left;/* Sauvegarde l'ancien enfant gauche */
    parent->left = new_node;/* Le nouveau nœud devient l'enfant gauche */
    new_node->left = old_left;/* L'ancien enfant gauche devient l'enfant gauche du nouveau nœud */
    old_left->parent = new_node;/* Met à jour le parent de l'ancien enfant gauche */
}
else
{
    /* Si le parent n'a pas d'enfant gauche, le nouveau nœud devient l'enfant gauche */
    parent->left = new_node;
}
return (new_node);
}
