#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
  int right, left;

  if (tree == NULL)
  {
    return (0);
  }
  left = binary_tree_height(tree->left);
  right = binary_tree_height(tree->right);

  return ((left > right ? left : right) + 1);
}
