Tutorial
--------

Une fermeture est un objet fonction qui se souvient des valeurs dans des portées englobantes même si elles ne sont pas présentes en mémoire. Procédons étape par étape.

Tout d'abord, une **fonction imbriquée** est une fonction définie à l'intérieur d'une autre fonction. Il est très important de noter que les fonctions imbriquées peuvent accéder aux variables de la portée englobante. Cependant, du moins en Python, elles sont uniquement en lecture seule. Cependant, on peut utiliser explicitement le mot-clé "nonlocal" avec ces variables afin de les modifier.

Par exemple :

    def transmit_to_space(message):
        "Ceci est la fonction englobante"
        def data_transmitter():
            "La fonction imbriquée"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Message test"))

Cela fonctionne bien car la fonction 'data_transmitter' peut accéder au 'message'. Pour démontrer l'utilisation du mot-clé "nonlocal", considérez ceci :

    def print_msg(number):
        def printer():
            "Ici, nous utilisons le mot-clé nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Sans le mot-clé nonlocal, la sortie serait "3 9", cependant, avec son utilisation, nous obtenons "3 3", c'est-à-dire que la valeur de la variable "number" est modifiée.

Maintenant, que diriez-vous que nous retournions l'objet fonction plutôt que d'appeler la fonction imbriquée à l'intérieur. (Rappelez-vous que même les fonctions sont des objets. (C'est Python.))

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
        
    fun2 = transmit_to_space("Burn the Sun!")
    fun2()

Même si l'exécution de "transmit_to_space()" était terminée, le message était plutôt conservé. Cette technique par laquelle les données sont attachées à un certain code même après la fin de ces autres fonctions originales est appelée fermetures en Python.

AVANTAGE : Les fermetures peuvent éviter l'utilisation de variables globales et fournir une certaine forme de masquage de données. (Par exemple, lorsqu'il y a quelques méthodes dans une classe, utilisez plutôt des fermetures).

De plus, les décorateurs en Python font un usage intensif des fermetures.

Exercice
--------

Créez une boucle imbriquée et une fermeture Python pour créer des fonctions afin d'obtenir plusieurs fonctions de multiplication à l'aide de fermetures. C’est-à-dire qu’à l'aide de fermetures, on pourrait créer des fonctions pour créer les fonctions multiply_with_5() ou multiply_with_4().

Tutorial Code
-------------

# votre code ici

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