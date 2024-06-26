#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
