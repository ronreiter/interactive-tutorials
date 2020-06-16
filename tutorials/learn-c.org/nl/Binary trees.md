Tutorial
--------

### Introduction

A Binary Tree is a type of data structure in which each node has at most two children (left child and right child). Binary trees are used to implement binary search trees and binary heaps, and are used for efficient searching and sorting. A binary tree is a special case of a K-ary tree, where k is 2. Common operations for binary trees include insertion, deletion, and traversal. The difficulty of performing these operations varies if the tree is balanced and also whether the nodes are leaf nodes or branch nodes. For **balanced trees** the depth of the left and right subtrees ov every node differ by 1 or less. This allows for a predictable **depth** also known as **height**. This is the measure of a node from root to leaf, where root is 0 and sebsequent nodes are (1,2..n). This can be expressed by the integer part of log<sub>2</sub>(n) where n is the number of nodes in the tree.

            g                  s                  9
           / \                / \                / \
          b   m              f   u              5   13
         / \                    / \                /  \
        c   d                  t   y              11  15

The operations performed on trees requires searching in one of two main ways: Depth First Search and Breadth-first search. **Depth-first search (DFS)** is an algorithm for traversing or searching tree or graph data structures. One starts at the root and explores as far as possible along each branch before backtracking. There are three types of depth first search traversal: **pre-order** visit, left, right, **in-order** left, visit, right, **post-order** left, right, visit. **Breadth-first search (BFS)** is an algorithm for traversing or searching tree or graph structures. In level-order, where we visit every node on a level before going to a lower level.<br>


Exercise
--------

Below is an implementation of a binary tree that has insertion and printing capabilities. This tree is ordered but not balanced. This example maintains its ordering at insertion time.

Change the print routine to depth-first search **pre-order**.


Tutorial Code
-------------

    #include <stdio.h>
    #include <stdlib.h>
    
    typedef struct node
    {
      int val;
      struct node * left;
      struct node * right;
    } node_t;
    
    void insert(node_t * tree,int val);
    void print_tree(node_t * current);
    void printDFS(node_t * current);
    
    int main()
    {
      node_t * test_list = malloc(sizeof(node_t));
      /* set values explicitly, alternative would be calloc() */
      test_list->val = 0;
      test_list->left = NULL;
      test_list->right = NULL;
    
      insert(test_list,5);
      insert(test_list,8);
      insert(test_list,4);
      insert(test_list,3);
    
      printDFS(test_list);
      printf("\n");
    }
    
    void insert(node_t * tree, int val)
    {
      if (tree->val == 0)
      {
        /* insert on current (empty) position */
        tree->val=val;
      }
      else
      {
        if (val < tree->val)
        {
          /* insert left */
          if (tree->left != NULL)
          {
            insert(tree->left, val);
          }
          else
          {
            tree->left = malloc(sizeof(node_t));
            /* set values explicitly, alternative would be calloc() */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* insert right */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right=malloc(sizeof(node_t));
              /* set values explicitly, alternative would be calloc() */
              tree->right->val=val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* depth-first search */
    void printDFS(node_t * current)
    {
      /* change the code here */
      if (current == NULL)         return;   /* security measure */
      if (current->left != NULL)   printDFS(current->left);
      if (current != NULL)         printf("%d ", current->val);
      if (current->right != NULL)  printDFS(current->right);
    }


Expected Output
---------------

    5 4 3 8

Solution
--------

    #include <stdio.h>
    #include <stdlib.h>
    
    typedef struct node
    {
      int val;
      struct node * left;
      struct node * right;
    } node_t;
    
    void insert(node_t * tree,int val);
    void print_tree(node_t * current);
    void printDFS(node_t * current);
    
    int main()
    {
      node_t * test_list = malloc(sizeof(node_t));
      /* set values explicitly, alternative would be calloc() */
      test_list->val = 0;
      test_list->left = NULL;
      test_list->right = NULL;
    
      insert(test_list,5);
      insert(test_list,8);
      insert(test_list,4);
      insert(test_list,3);
    
      printDFS(test_list);
      printf("\n");
    }
    
    void insert(node_t * tree, int val)
    {
      if (tree->val == 0)
      {
        /* insert on current (empty) position */
        tree->val=val;
      }
      else
      {
        if (val < tree->val)
        {
          /* insert left */
          if (tree->left != NULL)
          {
            insert(tree->left, val);
          }
          else
          {
            tree->left = malloc(sizeof(node_t));
            /* set values explicitly, alternative would be calloc() */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* insert right */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right=malloc(sizeof(node_t));
              /* set values explicitly, alternative would be calloc() */
              tree->right->val=val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* depth-first search */
    void printDFS(node_t * current)
    {
      /* change the code here */
      if (current == NULL)         return;   /* security measure */
      if (current != NULL)         printf("%d ", current->val);
      if (current->left != NULL)   printDFS(current->left);
      if (current->right != NULL)  printDFS(current->right);
    }
