Tutorial
--------

Les générateurs sont très faciles à mettre en œuvre, mais un peu difficiles à comprendre.

Les générateurs sont utilisés pour créer des itérateurs, mais avec une approche différente. Les générateurs sont des fonctions simples qui renvoient un ensemble d'éléments itérable, un à la fois, d'une manière spéciale.

Lorsqu'une itération sur un ensemble d'éléments commence en utilisant l'instruction `for`, le générateur est exécuté. Dès que le code de la fonction du générateur atteint une instruction `yield`, le générateur suspend son exécution et retourne une nouvelle valeur de l'ensemble à la boucle for. La fonction génératrice peut générer autant de valeurs (possiblement infinies) qu'elle le souhaite, en les restituant chacune à son tour.

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

Cette fonction décide comment générer les nombres aléatoires par elle-même, et exécute les instructions `yield` une par une, s'interrompant entre chacune pour restituer l'exécution à la boucle principale `for`.

Exercise
--------

Écrivez une fonction génératrice qui renvoie la série de Fibonacci. Ils sont calculés en utilisant la formule suivante : Les deux premiers nombres de la série sont toujours égaux à 1, et chaque nombre consécutif retourné est la somme des deux derniers nombres.

Indice : Pouvez-vous utiliser seulement deux variables dans la fonction génératrice ? Rappelez-vous que les attributions peuvent se faire simultanément. Le code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

va échanger simultanément les valeurs de a et b.

Tutorial Code
-------------

# complétez cette fonction
def fib():
    pass #ceci est une instruction nulle qui ne fait rien lorsqu'elle est exécutée, utile comme espace réservé.

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

# complétez cette fonction
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