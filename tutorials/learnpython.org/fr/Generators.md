Tutorial
--------

Les générateurs sont très faciles à implémenter, mais un peu difficiles à comprendre.

Les générateurs sont utilisés pour créer des itérateurs, mais avec une approche différente. Les générateurs sont de simples fonctions qui renvoient un ensemble iterable d'éléments, un à la fois, d'une manière spéciale.

Lorsque l'itération sur un ensemble d'éléments commence en utilisant l'instruction for, le générateur est exécuté. Une fois que le code de la fonction du générateur atteint une instruction "yield", le générateur cède son exécution à la boucle for, renvoyant une nouvelle valeur de l'ensemble. La fonction génératrice peut générer autant de valeurs (éventuellement infinies) qu'elle le souhaite, cédant chacune à son tour.

Voici un exemple simple d'une fonction génératrice qui renvoie 7 entiers aléatoires :

      import random
      
      def lottery():
          # renvoie 6 nombres entre 1 et 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # renvoie un 7ème nombre entre 1 et 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Cette fonction décide comment générer elle-même les nombres aléatoires, et exécute les instructions yield une à la fois, en s'interrompant entre chaque pour céder l'exécution à la boucle for principale.

Exercice
--------

Écrivez une fonction génératrice qui renvoie la série de Fibonacci. Elle est calculée en utilisant la formule suivante : Les deux premiers nombres de la série sont toujours égaux à 1, et chaque nombre consécutif renvoyé est la somme des deux derniers nombres.
Indice : Pouvez-vous utiliser uniquement deux variables dans la fonction génératrice ? Rappelez-vous que les affectations peuvent se faire simultanément. Le code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

intervertira simultanément les valeurs de a et b.

Tutorial Code
-------------

# remplissez cette fonction
def fib():
    pass # ceci est une instruction nulle qui ne fait rien lorsqu'elle est exécutée, elle est utile comme espace réservé.

# code de test
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

# remplissez cette fonction
def fib():
    a, b = 1, 1
    while 1:
        yield a
        a, b = b, a + b

# code de test
import types
if type(fib()) == types.GeneratorType:
    print("Good, The fib function is a generator.")

    counter = 0
    for n in fib():
        print(n)
        counter += 1
        if counter == 10:
            break