Tutorial
--------

A *binary tree* is a data structure in which each node has at most two children, called the *left* child and the *right* child. A *binary search tree* (BST) is a binary tree that keeps its nodes in sorted order: every node's value is greater than everything in its left subtree and smaller than everything in its right subtree.

Nodes are usually defined as structs that point to their children:

    struct node {
        int value;
        struct node * left;
        struct node * right;
    };

To insert a new value into a BST, you compare it with each node, going left if it is smaller and right if it is greater, until you reach a spot where you can create a new node:

    struct node * insert(struct node * tree, int value) {
        if (tree == NULL) {                    // empty spot found
            tree = new struct node;
            tree->value = value;
            tree->left = NULL;
            tree->right = NULL;
        } else if (value < tree->value) {
            tree->left = insert(tree->left, value);
        } else {
            tree->right = insert(tree->right, value);
        }
        return tree;
    }

Trees are naturally recursive, so operations like searching and inserting are often written recursively.

Exercise
--------

Write a recursive function called `lookup` that returns `1` if `value` is present in the tree, and `0` otherwise. The tree is a binary search tree, so you can decide whether to go left or right at each node.

Tutorial Code
-------------

    #include <stdio.h>

    struct node {
      int value;
      struct node * left;
      struct node * right;
    };

    struct node * insert(struct node * tree, int value) {
      if (tree == NULL) {
        tree = new struct node;
        tree->value = value;
        tree->left = NULL;
        tree->right = NULL;
      } else if (value < tree->value) {
        tree->left = insert(tree->left, value);
      } else {
        tree->right = insert(tree->right, value);
      }
      return tree;
    }

    /* write the recursive lookup function here */

    int main() {
      struct node * tree = NULL;
      tree = insert(tree, 10);
      tree = insert(tree, 5);
      tree = insert(tree, 15);
      tree = insert(tree, 12);
      printf("%d\n", lookup(tree, 12));
      printf("%d\n", lookup(tree, 99));
      return 0;
    }

Expected Output
---------------

    1
    0

Solution
--------

    #include <stdio.h>

    struct node {
      int value;
      struct node * left;
      struct node * right;
    };

    struct node * insert(struct node * tree, int value) {
      if (tree == NULL) {
        tree = new struct node;
        tree->value = value;
        tree->left = NULL;
        tree->right = NULL;
      } else if (value < tree->value) {
        tree->left = insert(tree->left, value);
      } else {
        tree->right = insert(tree->right, value);
      }
      return tree;
    }

    int lookup(struct node * tree, int value) {
      if (tree == NULL) {
        return 0;
      }
      if (value == tree->value) {
        return 1;
      } else if (value < tree->value) {
        return lookup(tree->left, value);
      } else {
        return lookup(tree->right, value);
      }
    }

    int main() {
      struct node * tree = NULL;
      tree = insert(tree, 10);
      tree = insert(tree, 5);
      tree = insert(tree, 15);
      tree = insert(tree, 12);
      printf("%d\n", lookup(tree, 12));
      printf("%d\n", lookup(tree, 99));
      return 0;
    }
