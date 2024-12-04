Tutorial
--------

Les générateurs sont très faciles à implémenter, mais un peu difficiles à comprendre.

Les générateurs sont utilisés pour créer des itérateurs, mais avec une approche différente. Les générateurs sont de simples fonctions qui retournent un ensemble d'éléments itérables, un à la fois, d'une manière particulière.

Lorsqu'une itération sur un ensemble d'éléments commence en utilisant l'instruction for, le générateur est exécuté. Une fois que le code de la fonction du générateur atteint une instruction "yield", le générateur cède son exécution à la boucle for, renvoyant une nouvelle valeur de l'ensemble. La fonction génératrice peut générer autant de valeurs (éventuellement infinies) qu'elle le souhaite, en produisant chacune à son tour.

Voici un exemple simple d'une fonction génératrice qui retourne 7 entiers aléatoires :

      import random
      
      def lottery():
          # retourne 6 nombres entre 1 et 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # retourne un 7ème nombre entre 1 et 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("Et le numéro suivant est... %d!" %(random_number))

Cette fonction décide de manière autonome comment générer les nombres aléatoires, et exécute les instructions yield une par une, en se mettant en pause entre chaque pour rendre le contrôle à la boucle principale.

Exercise
--------

Écrivez une fonction génératrice qui retourne la série de Fibonacci. Ils sont calculés en utilisant la formule suivante : Les deux premiers nombres de la série sont toujours égaux à 1, et chaque nombre consécutif retourné est la somme des deux derniers nombres.
Indice : Pouvez-vous utiliser seulement deux variables dans la fonction génératrice ? N'oubliez pas que les affectations peuvent être effectuées simultanément. Le code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

permettra d'inverser simultanément les valeurs de a et b.

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