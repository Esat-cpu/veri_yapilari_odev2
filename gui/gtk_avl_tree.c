#include <gtk/gtk.h>
#include "avl_tree.h"


Tree* init_tree_node (int data) {
    Tree* node = g_malloc(sizeof (Tree));
    node->left = NULL;
    node->right = NULL;
    node->height = 0;
    node->data = data;
    return node;
}


void free_tree (Tree* root) {
    if (root == NULL) return;

    free_tree(root->left);
    free_tree(root->right);

    g_free(root);
}

