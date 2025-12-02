チュートリアル
-------------

### Introduction

二分木は、各ノードが最大 2 つの子 (左の子と右の子) を持つデータ構造のタイプです。二分木は、二分探索木と二分ヒープの実装に使用され、効率的な検索とソートに使用されます。二分木は、k が 2 である K 分木の特殊なケースです。二分木の一般的な操作には、挿入、削除、トラバーサルがあります。これらの操作を実行する難易度は、木がバランスが取れているかどうか、またノードがリーフ ノードであるかブランチ ノードであるかによって異なります。**バランスの取れた木** では、各ノードの左と右のサブツリーの深さの差は 1 以下です。これにより、**深さ** (高さ** とも呼ばれる) を予測できるようになります。これは、ルートからリーフまでのノードの測定値で、ルートが 0、後続のノードが (1,2..n) です。これは、log<sub>2</sub>(n) の整数部分で表すことができます。ここで、n は木内のノードの数です。
二分木は、各ノードが最大 2 つの子 (左の子と右の子) を持つデータ構造のタイプです。二分木は、二分探索木と二分ヒープの実装に使用され、効率的な検索とソートに使用されます。二分木は、k が 2 である K 分木の特殊なケースです。二分木の一般的な操作には、挿入、削除、トラバーサルがあります。これらの操作を実行する難易度は、木がバランスが取れているかどうか、またノードがリーフ ノードであるかブランチ ノードであるかによって異なります。**バランスの取れた木** では、各ノードの左と右のサブツリーの深さの差は 1 以下です。これにより、**深さ** (高さ** とも呼ばれる) を予測できるようになります。これは、ルートからリーフまでのノードの測定値で、ルートが 0、後続のノードが (1,2..n) です。これは、log<sub>2</sub>(n) の整数部分で表すことができます。ここで、n は木内のノードの数です。

            g                  s                  9
           / \                / \                / \
          b   m              f   u              5   13
         / \                    / \                /  \
        c   d                  t   y              11  15

ツリーに対して実行される操作には、深さ優先探索と幅優先探索という 2 つの主な方法のいずれかによる検索が必要です。**深さ優先探索 (DFS)** は、ツリーまたはグラフのデータ構造を走査または検索するためのアルゴリズムです。ルートから開始し、各ブランチに沿って可能な限り探索してからバックトラックします。深さ優先探索の走査には、**前順序** 訪問、左、右、**内順序** 訪問、右、**後順序** 左、右、訪問の 3 つの種類があります。**幅優先探索 (BFS)** は、ツリーまたはグラフの構造を走査または検索するためのアルゴリズムです。レベル順序では、下位レベルに移動する前に、そのレベルのすべてのノードを訪問します。<br>
ツリーに対して実行される操作には、深さ優先探索と幅優先探索という 2 つの主な方法のいずれかによる検索が必要です。**深さ優先探索 (DFS)** は、ツリーまたはグラフのデータ構造を走査または検索するためのアルゴリズムです。ルートから開始し、各ブランチに沿って可能な限り探索してからバックトラックします。深さ優先探索の走査には、**前順序** 訪問、左、右、**内順序** 訪問、右、**後順序** 左、右、訪問の 3 つの種類があります。**幅優先探索 (BFS)** は、ツリーまたはグラフの構造を走査または検索するためのアルゴリズムです。レベル順序では、下位レベルに移動する前に、そのレベルのすべてのノードを訪問します。<br>


演習
----

以下は、挿入と出力の機能を持つ二分木の実装です。この木は順序付けされていますが、バランスはとれていません。この例では、挿入時に順序付けが維持されます。
以下は、挿入と出力の機能を持つ二分木の実装です。この木は順序付けされていますが、バランスはとれていません。この例では、挿入時に順序付けが維持されます。

出力ルーチンを深さ優先探索の **pre-order** に変更してください。
出力ルーチンを深さ優先探索の **pre-order** に変更してください。


チュートリアル コード
-------------------

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
      node_t * test_list = (node_t *) malloc(sizeof(node_t));
      /* 値を明示的に設定する代わりにcalloc()を使用する */
      /* 値を明示的に設定する代わりにcalloc()を使用する */
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
        /* 現在の（空の）位置に挿入する */
        tree->val = val;
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
            tree->left = (node_t *) malloc(sizeof(node_t));
            /* 値を明示的に設定する代わりにcalloc()を使用する */
            /* 値を明示的に設定する代わりにcalloc()を使用する */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* 右に挿入 */
            /* 右に挿入 */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right = (node_t *) malloc(sizeof(node_t));
              /* 値を明示的に設定する代わりにcalloc()を使用する */
              /* 値を明示的に設定する代わりにcalloc()を使用する */
              tree->right->val = val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* 深さ優先探索 */
    /* 深さ優先探索 */
    void printDFS(node_t * current)
    {
      /* ここでコードを変更してください */
      if (current == NULL)         return;   /* セキュリティ対策 */
      /* ここでコードを変更してください */
      if (current == NULL)         return;   /* セキュリティ対策 */
      if (current->left != NULL)   printDFS(current->left);
      if (current != NULL)         printf("%d ", current->val);
      if (current->right != NULL)  printDFS(current->right);
    }


期待している出力
---------------

    5 4 3 8

解答
----

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
      node_t * test_list = (node_t *) malloc(sizeof(node_t));
      /* 値を明示的に設定する代わりにcalloc()を使用する */
      /* 値を明示的に設定する代わりにcalloc()を使用する */
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
        /* 現在の（空の）位置に挿入する */
        /* 現在の（空の）位置に挿入する */
        tree->val = val;
      }
      else
      {
        if (val < tree->val)
        {
          /* 左に挿入 */
          if (tree->left != NULL)
          {
            insert(tree->left, val);
          }
          else
          {
            tree->left = (node_t *) malloc(sizeof(node_t));
            /* 値を明示的に設定する代わりにcalloc()を使用する */
            /* 値を明示的に設定する代わりにcalloc()を使用する */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* 右に挿入 */
            /* 右に挿入 */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right = (node_t *) malloc(sizeof(node_t));
              /* 値を明示的に設定する代わりにcalloc()を使用する */
              /* 値を明示的に設定する代わりにcalloc()を使用する */
              tree->right->val = val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* 深さ優先探索 */
    void printDFS(node_t * current)
    {
      /* change the code here */
      if (current == NULL)         return;   /* security measure */
      if (current != NULL)         printf("%d ", current->val);
      if (current->left != NULL)   printDFS(current->left);
      if (current->right != NULL)  printDFS(current->right);
    }
