#ifndef AVL_TREE_H
#define AVL_TREE_H

typedef Tree struct Tree;

Tree* avl_insert (Tree* root, Tree* new);
Tree* avl_remove (Tree* root, int data);

#endif

