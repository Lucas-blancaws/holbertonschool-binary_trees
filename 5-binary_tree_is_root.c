#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_is_root - Vérifie si un nœud est la racine d'un arbre binaire
* @node: Pointeur vers le nœud à vérifier
* Return: 1 si le nœud est la racine, 0 sinon ou si le nœud est NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
/* Vérifie si le nœud est NULL */
if (node == NULL)
{
	return (0);
}

/* Vérifie si le nœud n'a pas de parent */
if (node->parent == NULL)
{
	return (1);
}

/* Retourne 0 si le nœud a un parent */
return (0);
}
