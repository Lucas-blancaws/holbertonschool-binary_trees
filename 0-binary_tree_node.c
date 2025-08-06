#include "binary_trees.h"
/**
 * binary_tree_node - crée un nœud pour un arbre binaire
 * @parent: pointeur vers le nœud parent du nouveau nœud
 * @value: valeur à stocker dans le nouveau nœud
 * Return: pointeur vers le nouveau nœud, ou NULL en cas d’échec
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
