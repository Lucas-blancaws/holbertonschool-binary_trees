#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_insert_left - Insère un nœud à gauche d'un parent
* @parent: Pointeur vers le nœud parent
* @value: Valeur du nouveau nœud
* Return: Pointeur vers le nouveau nœud, ou NULL en cas d’échec
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new_node->left = old_left;/* anc enfant left devient ent left du new nœud */
	old_left->parent = new_node;/* MAJ le parent de l'ancien enfant gauche */
}
else
{
	/* Si parent a pas d'enfant gauche,le nouveau nœud devient l'enfant gauche */
	parent->left = new_node;
}
return (new_node);
}
