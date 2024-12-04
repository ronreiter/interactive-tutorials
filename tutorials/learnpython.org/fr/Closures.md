Tutorial
--------

Une fermeture est un objet fonction qui se souvient des valeurs dans les portées englobantes même si elles ne sont pas présentes en mémoire. Allons-y étape par étape.

Premièrement, une **fonction imbriquée** est une fonction définie à l'intérieur d'une autre fonction. Il est très important de noter que les fonctions imbriquées peuvent accéder aux variables de la portée englobante. Cependant, du moins en Python, elles ne sont que en lecture seule. Cependant, on peut utiliser le mot-clé "nonlocal" explicitement avec ces variables afin de les modifier.

Par exemple :

    def transmit_to_space(message):
        "Ceci est la fonction englobante"
        def data_transmitter():
            "La fonction imbriquée"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Message de test"))

Cela fonctionne bien car la fonction 'data_transmitter' peut accéder au 'message'. Pour démontrer l'utilisation du mot-clé "nonlocal", considérez ceci

    def print_msg(number):
        def printer():
            "Ici, nous utilisons le mot-clé nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Sans le mot-clé nonlocal, le résultat serait "3 9", cependant, avec son utilisation, nous obtenons "3 3", c'est-à-dire que la valeur de la variable "number" est modifiée.

Maintenant, que diriez-vous de retourner l'objet fonction plutôt que d'appeler la fonction imbriquée à l'intérieur. (Rappelez-vous que même les fonctions sont des objets. (C'est Python.))

    def transmit_to_space(message):
        "Ceci est la fonction englobante"
        def data_transmitter():
            "La fonction imbriquée"
            print(message)
        return data_transmitter

Et nous appelons la fonction comme suit :

      def transmit_to_space(message):
        "Ceci est la fonction englobante"
        def data_transmitter():
            "La fonction imbriquée"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Brûle le Soleil!")
  	  fun2()

Même si l'exécution de "transmit_to_space()" était terminée, le message a été plutôt préservé. Cette technique par laquelle les données sont attachées à du code même après la fin de ces autres fonctions originales s'appelle fermetures en Python.

AVANTAGE : Les fermetures peuvent éviter l'utilisation de variables globales et fournissent une certaine forme de dissimulation de données. (Par exemple, lorsqu'il y a peu de méthodes dans une classe, utilisez les fermetures à la place).

De plus, les décorateurs en Python font un usage intensif des fermetures.

Exercise
--------

Faites une boucle imbriquée et une fermeture Python pour créer des fonctions afin d'obtenir plusieurs fonctions de multiplication en utilisant des fermetures. C'est-à-dire qu'en utilisant des fermetures, on pourrait créer des fonctions pour créer des fonctions multiply_with_5() ou multiply_with_4() en utilisant des fermetures.

Tutorial Code
-------------

# your code goes here

multiplywith5 = multiplier_of(5)
multiplywith5(9)

Expected Output
---------------

test_output_contains("45")
success_msg("Great work!")

Solution
--------

def multiplier_of(n):
    def multiplier(number):
        return number*n
    return multiplier

multiplywith5 = multiplier_of(5)
print(multiplywith5(9))