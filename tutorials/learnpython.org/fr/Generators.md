Tutorial
--------

Les générateurs sont très faciles à mettre en œuvre, mais un peu difficiles à comprendre.

Les générateurs sont utilisés pour créer des itérateurs, mais avec une approche différente. Les générateurs sont des fonctions simples qui renvoient un ensemble itérable d'éléments, un à la fois, d'une manière spéciale.

Lorsqu'une itération sur un ensemble d'éléments commence à l'aide de l'instruction for, le générateur est exécuté. Une fois que le code de la fonction du générateur atteint une instruction "yield", le générateur cède son exécution à la boucle for, renvoyant une nouvelle valeur de l'ensemble. La fonction générateur peut générer autant de valeurs (possiblement infinies) qu'elle le souhaite, en cédant chacune à son tour.

Voici un exemple simple d'une fonction générateur qui renvoie 7 entiers aléatoires :

      import random
      
      def lottery():
          # retourne 6 nombres entre 1 et 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # retourne un 7ème nombre entre 1 et 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("Et le prochain numéro est... %d!" %(random_number))

Cette fonction décide elle-même comment générer les nombres aléatoires et exécute les instructions yield une à la fois, en s'interrompant entre chaque exécution pour céder l'exécution à la boucle for principale.

Exercice
--------

Écrivez une fonction générateur qui renvoie la série de Fibonacci. Ils sont calculés en utilisant la formule suivante : les deux premiers nombres de la série sont toujours égaux à 1, et chaque nombre consécutif renvoyé est la somme des deux derniers nombres.
Indice : Pouvez-vous utiliser seulement deux variables dans la fonction générateur ? Rappelez-vous que les affectations peuvent être effectuées simultanément. Le code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

permettra de permuter simultanément les valeurs de a et b.

Tutorial Code
-------------

# fill in this function
def fib():
    pass #this is a null statement which does nothing when executed, useful as a placeholder.

# testing code
import types
if type(fib()) == types.GeneratorType:
    print("Good, The fib function is a generator.")

    counter = 0
    for n in fib():
        print(n)
        counter += 1
        if counter == 10:
            break



Expected Output
---------------

test_output_contains("Good, The fib function is a generator.")
success_msg('Good work!')

Solution
--------

# fill in this function
def fib():
    a, b = 1, 1
    while 1:
        yield a
        a, b = b, a + b

# testing code
import types
if type(fib()) == types.GeneratorType:
    print("Good, The fib function is a generator.")

    counter = 0
    for n in fib():
        print(n)
        counter += 1
        if counter == 10:
            break