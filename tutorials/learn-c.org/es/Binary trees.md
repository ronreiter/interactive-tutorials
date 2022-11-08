Tutorial
--------

### Introducción

Un Árbol Binario es un tipo de estructura de datos donde cada nodo tiene por lo menos dos hijos (hijo izquierdo e hijo derecho). Los Árboles Binarios son usados para implementar árboles de busqueda binaria, y son usados para buscar y ordenar eficientemente. Un árbol binario es un caso especial de un árbol K-ario, donde K es 2. Algunas operaciones para los árboles binarios incluyen inserción, supresión, y poder recorrerlos. La dificultad de realizar estas operaciones va a depender de si el árbol está balanceado y si los nodos son nodos hijos o nodos padres. Para un **árbol balanceado** el profundo de los nodos de los subárboles izquierdos y derechos difieren por 1 o menos. Esto permite una **profundidad** predecible también conocida como **altura**. Esta es la medida de raíz a hoja (padre e hijo), donde la raíz es 0 y los nodos siguientes son (1,2..n). Esto puede ser expresado como la parte entera de log<sub>2</sub>(n) donde n es el número de nodos en el árbol.

            g                  s                  9
           / \                / \                / \
          b   m              f   u              5   13
         / \                    / \                /  \
        c   d                  t   y              11  15

Las operaciones realizadas requieren buscar en una de dos maneras principales: Búsqueda de "Profundidad Primero" y Búsqueda de "Amplitud Primero". **Depth-first search (DFS, Profunidad Primero)** es un algoritmo para recorrer o buscar en estructuras de árboles o gráficos de datos. Uno empieza en la raíz y explora tan lejos como puede entre cada rama antes de volver atrás. Hay tres tipos de recorrido en este tipo de búsqueda: **pre orden** visita, izquierda, derecha, **en orden** izquierda, visita, derecha, **post orden** izquierda, derecha, visita. **Breadth-first search (BFS, Amplitud Primero)** es un algoritmo para recorrer y buscar estructuras de árboles o gráficos. En orden de nivel, donde visitamos cada nodo en un nivel antes de ir a un nivel más bajo.<br>


Ejercicio
--------

Debajo hay una implementación de un árbol binario que tiene capacidades de imprimirse e insertar elementos en él. Este árbol está ordenado pero no balanceado. Este ejemplo mantiene su orden a la hora de insertar.

Cambia la rutina de impresión a búsqueda de profundidad primero con **pre orden**.


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
      node_t * test_list = (node_t *) malloc(sizeof(node_t));
      /* definir los valores explicitamente, una alternativa sería usar calloc() */
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
        /* insertar en la posición (vacía) actual */
        tree->val = val;
      }
      else
      {
        if (val < tree->val)
        {
          /* insertar izquierda */
          if (tree->left != NULL)
          {
            insert(tree->left, val);
          }
          else
          {
            tree->left = (node_t *) malloc(sizeof(node_t));
            /* definir los valores explicitamente, una alternativa sería usar calloc() */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* insertar derecha */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right = (node_t *) malloc(sizeof(node_t));
              /* definir los valores explicitamente, una alternativa sería usar calloc() */
              tree->right->val = val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* búsqueda de profundidad primero */
    void printDFS(node_t * current)
    {
      /* cambia el código aquí */
      if (current == NULL)         return;   /* medida de seguridad */
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
      node_t * test_list = (node_t *) malloc(sizeof(node_t));
      /* definir los valores explicitamente, una alternativa sería usar calloc() */
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
        /* insertar en la posición (vacía) actual */
        tree->val = val;
      }
      else
      {
        if (val < tree->val)
        {
          /* insertar izquierda */
          if (tree->left != NULL)
          {
            insert(tree->left, val);
          }
          else
          {
            tree->left = (node_t *) malloc(sizeof(node_t));
            /* definir los valores explicitamente, una alternativa sería usar calloc() */
            tree->left->val = val;
            tree->left->left = NULL;
            tree->left->right = NULL;
          }
        }
        else
        {
          if (val >= tree->val)
          {
            /* insertar derecha */
            if (tree->right != NULL)
            {
              insert(tree->right,val);
            }
            else
            {
              tree->right = (node_t *) malloc(sizeof(node_t));
              /* definir los valores explicitamente, una alternativa sería usar calloc() */
              tree->right->val = val;
              tree->right->left = NULL;
              tree->right->right = NULL;
            }
          }
        }
      }
    }
    
    /* búsqueda de profundidad primero */
    void printDFS(node_t * current)
    {
      /* cambia el código aquí */
      if (current == NULL)         return;   /* medida de seguridad */
      if (current != NULL)         printf("%d ", current->val);
      if (current->left != NULL)   printDFS(current->left);
      if (current->right != NULL)  printDFS(current->right);
    }
