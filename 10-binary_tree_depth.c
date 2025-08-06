#include "binary_trees.h"

/**
* binary_tree_depth - Calcule récursivement la profondeur d’un nœud
* @tree: pointeur vers le nœud à mesurer
*
* Return: profondeur du nœud, ou 0 si tree est NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
