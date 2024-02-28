#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be inserted in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
        return (NULL);

    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    if (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }

    parent->left = newNode;
    newNode->parent = parent;

    return (newNode);
}
