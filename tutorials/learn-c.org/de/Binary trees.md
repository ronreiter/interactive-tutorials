Tutorial
--------

### Einführung

Ein binärer Baum ist eine Art von Datenstruktur, in welcher jeder Knoten höchstens 2 Kinder hat (ein linkes Kind und ein rechtes Kind). Binäre Bäume werden benutzt um binäre Suchbäume und binäre Heaps zu implementieren und für effizientes Suchen und Sortieren. Ein binärer Baum ist ein Spezialfall eines k-dimensionalen Baums, bei dem k=2 gilt. Standardoperationen eines binären Baumes sind das Einfügen, Entfernen und Traversieren. Wie performant diese Operationen sind, hängt davon ab, ob der Baum balanciert ist und ob der von den Operationen betroffene Knoten ein Blattknoten oder ein innerer Knoten ist. Bei **balancierten Bäumen** ist die Tiefe des linken und des rechten Teilbaums jedes Knotens 1 oder weniger. Dies erlaubt eine voraussagbare **Tiefe** eines Baumes für jede Anzahl an Knoten, die er beherbergen soll, die sogenannte **Höhe**. Wenn ein Baum n Knoten hat, so ist seine Höhe die Vorkommazahl von log<sub>2</sub>(n).

            g                  s                  9
           / \                / \                / \
          b   m              f   u              5   13
         / \                    / \                /  \
        c   d                  t   y              11  15

Die Operationen, die auf einem Baum ausgeführt werden, machen es erforderlich, dass auf eine von zwei Weisen gesucht wird. **Tiefensuche** ist ein Algorithmus zum traversieren oder durchsuchen von Baum- und Graphdatenstrukturen. Man startet an der Wurzel und erkundet den momentanen Ast solange es geht, bevor man den Pfad zurückverfolgt und den nächstmöglichen, unbeschrittenen Pfad verfolgt. Es gibt 3 verschiedene Arten der Tiefensuche: **pre-order** Schaue dir den aktuellen Knoten an, dann seinen linken Kindknoten, dann seinen rechten Kindknoten, **in-order** Schaue dir den linken Kindknoten an, dann den aktuellen Knoten, dann den rechten Kindknoten, **post-order** Schaue dir den linken Kindknoten an, dann den rechten Kindknoten und dann den aktuellen Knoten. **Breitensuche** ist ein Algorithmus zum traversieren oder durchsuchen von Baum- und Graphdatenstrukturen. Er arbeitet mit Ebenen. Es werden zuerst alle Knoten einer Ebene besucht, bevor in eine tiefere gegangen wird.<br />


Übung
-----

Unten ist eine Implementation eines binären Baumes zu sehen, die das Einfügen von Knoten und das Ausgeben des Baumes selbst unterstützt. Der Baum ist geordnet, aber nicht balanciert. Dieses Beispiel ordnet sich selbst, wenn ein Knoten eingefügt wird.


Tutorial Code
-------------

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
      insert(test_list,5);
      insert(test_list,8);
      insert(test_list,4);
      insert(test_list,3);
      printDFS(test_list);}

    void insert(node_t * tree,int val){
      if(tree->val==NULL)tree->val=val;
      else if(val<tree->val)
        if(tree->left!=NULL)insert(tree->left,val);
        else{
          tree->left=malloc(sizeof(node_t));
          tree->left->val=val;    }
      else if(val>=tree->val)
        if(tree->right!=NULL)insert(tree->right,val);
        else{
          tree->right=malloc(sizeof(node_t));
          tree->right->val=val;}    }

    void print_tree(node_t * current) {
      if(current!=NULL)printf("\n%d ",current->val);
      if(current->left!=NULL) printf("L%d ",current->left->val);
      if(current->right!=NULL)printf(" R%d",current->right->val);
      if(current->left!=NULL) print_tree(current->left);
      if(current->right!=NULL)print_tree(current->right);}

    void printDFS(node_t * current) {
      if(current->left!=NULL) printDFS(current->left);
      if(current!=NULL)printf("%d ",current->val);
      if(current->right!=NULL)printDFS(current->right);}

Erwartete Ausgabe
-----------------

    1 2 3 4

Lösung
--------

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
      insert(test_list,5);
      insert(test_list,8);
      insert(test_list,4);
      insert(test_list,3);
      printDFS(test_list);}

    void insert(node_t * tree,int val){
      if(tree->val==NULL)tree->val=val;
      else if(val<tree->val)
        if(tree->left!=NULL)insert(tree->left,val);
        else{
          tree->left=malloc(sizeof(node_t));
          tree->left->val=val;    }
      else if(val>=tree->val)
        if(tree->right!=NULL)insert(tree->right,val);
        else{
          tree->right=malloc(sizeof(node_t));
          tree->right->val=val;}    }

    void print_tree(node_t * current) {
      if(current!=NULL)printf("\n%d ",current->val);
      if(current->left!=NULL) printf("L%d ",current->left->val);
      if(current->right!=NULL)printf(" R%d",current->right->val);
      if(current->left!=NULL) print_tree(current->left);
      if(current->right!=NULL)print_tree(current->right);}

    void printDFS(node_t * current) {
      if(current->left!=NULL) printDFS(current->left);
      if(current!=NULL)printf("%d ",current->val);
      if(current->right!=NULL)printDFS(current->right);}
