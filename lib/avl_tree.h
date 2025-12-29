#ifndef AVL_TREE_H
#define AVL_TREE_H


typedef struct Tree {
    int data;
    struct Tree* left;
    struct Tree* right;
} Tree;


Tree* avl_insert (Tree* root, Tree* new);
Tree* avl_remove (Tree* root, int data, int* found);

#endif

