Tutorial
--------

### Introduction

Le langage de programmation C est un langage de programmation polyvalent, qui est intimement lié au fonctionnement interne des machines. 
La compréhension du fonctionnement de la mémoire de l'ordinateur est un aspect important du langage C. Bien qu'il puisse être considéré
comme "difficile à apprendre", le C est en réalité un langage très simple, avec des pouvoirs très puissants.

C est un langage très répandu, et c'est le langage avec lequel sont réalisées beaucoup de logiciels tels que Windows, l'interpréteur Python, Git, et 
énormément d'autres encore.

C est un langage compilé - ce qui signifie que pour l'exécuter, le compilateur (par exemple, GCC ou Clang ou Visual Studio) doit prendre le code que
nous avons écrit, le traiter, et ensuite créer un fichier exécutable. Ce fichier pourra alors être exécuté, et il effectuera ce que nous désirions que le programme
fasse.

### Notre premier program

Chaque programme C utilise des bibliothèques, qui donnent la possibilité d'exécuter des fonctions nécessaires. Par exemple, la fonction la plus basique,
appelée `printf`, qui affiche à l'écran, est définie dans la bibliothèque `stdio` et déclarée dans le fichier en-tête `stdio.h`. 

Afin que notre programme puisse exécuter correctement la fonction `printf`, nous devons ajouter la directive d'inclusion en première ligne de notre code&nbsp;:

    #include <stdio.h>

La deuxième partie du code est le code effectif que nous allons écrire. Les premières instructions qui vont s'exécuter seront toujours situées
dans la fonction `main`. 

    int main(void) {
      ... notre code sera ici
    }

Le mot-clé `int` indique que la fonction `main` renverra un entier - un simple nombre. Le nombre qui sera renvoyé
par la fonction indique si le programme que nous avons écrit a fonctionné correctement. Si nous voulons dire que notre code
s'est exécuté avec succès, nous retournerons le nombre 0. Un nombre plus grand que 0 signifiera que le programme que nous avons écrit a échoué.

Dans ce tutoriel, nous retournerons 0 pour indiquer que le programme a réussi son exécution&nbsp;:

    return 0;
    
Le mot-clé `void` indique que notre fonction `main` n'a nul besoin de paramètres pour s'exécuter.

Notez que chaque ligne en C doit se terminer avec un point-virgule, afin que le compilateur sache qu'il s'agit d'une nouvelle instruction.

Enfin et surtout, nous aurons besoin d'appeler la fonction `printf` pour afficher notre phrase.

Exercise
--------

Changez le program ci-dessous de façon à ce qu'il affiche en sortie "Hello, World!". 

Tutorial Code
-------------

    #include <stdio.h>

    int main() {
      printf("Goodbye, World!");
      return 0;
    }

Expected Output
---------------

    Hello, World!

Solution
--------

    #include <stdio.h>

    int main() {
      printf("Hello, World!");
      return 0;
    }
