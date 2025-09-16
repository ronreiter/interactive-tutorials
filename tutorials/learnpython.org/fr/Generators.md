Les générateurs sont très faciles à mettre en œuvre, mais un peu difficiles à comprendre.

Les générateurs sont utilisés pour créer des itérateurs, mais avec une approche différente. Les générateurs sont des fonctions simples qui renvoient un ensemble d'éléments itérables, un à la fois, d'une manière particulière.

Lorsqu'une itération sur un ensemble d'éléments commence en utilisant l'instruction for, le générateur est exécuté. Une fois que le code de la fonction du générateur atteint une instruction "yield", le générateur cède son exécution à la boucle for, renvoyant une nouvelle valeur de l'ensemble. La fonction du générateur peut générer autant de valeurs (possiblement infinies) qu'elle le souhaite, en les cédant chacune à son tour.

Voici un exemple simple d'une fonction génératrice qui renvoie 7 entiers aléatoires :

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Cette fonction décide elle-même comment générer les nombres aléatoires et exécute les instructions yield une par une, en se mettant en pause entre chaque pour céder l'exécution à la boucle for principale.

Exercice
--------

Écrivez une fonction génératrice qui renvoie la série de Fibonacci. Ils sont calculés en utilisant la formule suivante : Les deux premiers nombres de la série sont toujours égaux à 1, et chaque nombre consécutif renvoyé est la somme des deux derniers nombres.
Indice : Pouvez-vous utiliser seulement deux variables dans la fonction génératrice ? Rappelez-vous que les affectations peuvent être faites simultanément. Le code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

échangera simultanément les valeurs de a et b.