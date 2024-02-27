#ifndef BINARY_TREEE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_root(const binary_tree_t *node);


#endif
