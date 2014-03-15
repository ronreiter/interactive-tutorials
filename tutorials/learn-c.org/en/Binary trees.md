**Binary Tree** is a type of data structure in which each node has at most two children (left child and right child). Binary trees are used to implement binary search trees and binary heaps, and are used for efficient searching and sorting. A binary tree is a special case of a K-ary tree, where k is 2. Common operations for binary trees include insertion, deletion, and traversal. The difficulty of performing these operations varies if the tree is balanced and also whether the nodes are leaf nodes or branch nodes. For **balanced trees** the depth of the left and right subtrees ov every node differ by 1 or less. This allows for a predictable **depth** also known as **height**. This is the measure of a node from root to leaf, where root is 0 and sebsequent nodes are (1,2..n). This can be expressed by the integer part of log<sub>2</sub>(n) where n is the number of nodes in the tree.   

The operations performed on trees requires searching in one of two main ways: Depth First Search and Breadth-first search. **Depth-first search (DFS)** is an algorithm for traversing or searching tree or graph data structures. One starts at the root and explores as far as possible along each branch before backtracking. There are three types of depth first search traversal: **pre-order** visit, left, right, **in-order** left, visit, right, **post-order** left, right, visit. **Breadth-first search (BFS)** is an algorithm for traversing or searching tree or graph structures. In level-order, where we visit every node on a level before going to a lower level.<br>

**AVL trees** O(log n) are self-balancing binary search trees. The heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property. Lookup, insertion, and deletion all take (O)log n_ time in both the average and worst cases, where n is the number of nodes in the tree prior to the operation. Insertions and deletions may require the tree to be rebalanced by one or more tree rotations. AVL is attractive for data structures that may be built once and loaded without reconstruction, such as language dictionaries (or program dictionaries, such as the opcodes of an assembler or interpreter).
**Red–black trees** O(log n) offer worst-case guarantees for insertion time , deletion time, and search time. Not only does this make them valuable in time-sensitive applications such as real-time applications, but it makes them valuable building blocks in other data structures which provide worst-case guarantees; for example, many data structures used in computational geometry can be based on red–black trees, and the Completely Fair Scheduler used in current Linux kernels uses red–black trees, functional programming where they are one of the most common persistent data structures, associative arrays and sets which can retain previous versions after mutations. The persistent version of red–black trees requires  space for each insertion or deletion, in addition to time. 

Below is an implementation of a binary tree that has insertion and printing capabilities, but this is not an in order tree. As you can see it will insert nodes in the order left, right, leftleft. This is not a sterling example of a binary tree, because we would like it to be in order and balanced. The way we accomplish this is by having a more sophisticated insert method that will strategically place new information. 

    #include <stdio.h>
    #include <stdlib.h>
    
    typedef struct node {
      int val;
      struct node * left;
      struct node * right;} node_t;
    
    void insert(node_t * tree,int val);
    void print_tree(node_t * current);
    void printDFS(node_t * current);
    
    int main() {
      node_t * test_list = malloc(sizeof(node_t));
      test_list->val = 1;
      insert(test_list,2);
      insert(test_list,3);
      insert(test_list,4);
      printDFS(test_list);}
    
    void insert(node_t * tree,int val){
      if(tree->left==NULL){
        tree->left=malloc(sizeof(node_t));
        tree->left->val=val;    }
      else if(tree->right==NULL){
        tree->right=malloc(sizeof(node_t));
        tree->right->val=val;}
      else insert(tree->right,val);}
    
    void print_tree(node_t * current) {
      if(current!=NULL)printf("\n%d ",current->val);
      if(current->left!=NULL) printf("L%d ",current->left->val);
      if(current->right!=NULL)printf(" R%d",current->right->val);   
      if(current->left!=NULL) print_tree(current->left);
      if(current->right!=NULL)print_tree(current->right);}
    
    void printDFS(node_t * current) {
      if(current!=NULL)printf("%d ",current->val);
      if(current->left!=NULL) printDFS(current->left);
      if(current->right!=NULL)printDFS(current->right);}
    
