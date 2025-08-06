#include "binary_trees.h"

/**
* binary_tree_uncle - Trouve l'oncle d’un nœud dans un arbre binaire
* @node: pointeur vers le nœud
*
* Return: pointe vers oncle, ou NUL si node son parent ou grand-parent est NULL
* ou s’il n’a pas d’oncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
