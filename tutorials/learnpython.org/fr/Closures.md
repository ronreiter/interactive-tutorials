Tutorial
--------

Une fermeture est un objet fonction qui se souvient des valeurs dans les portées englobantes, même si elles ne sont pas présentes en mémoire. Abordons cela étape par étape.

Tout d'abord, une **fonction imbriquée** est une fonction définie à l'intérieur d'une autre fonction. Il est très important de noter que les fonctions imbriquées peuvent accéder aux variables de la portée englobante. Cependant, du moins en Python, elles ne sont que en lecture seule. Cependant, on peut utiliser explicitement le mot-clé "nonlocal" avec ces variables pour les modifier.

Par exemple :

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

Cela fonctionne bien car la fonction 'data_transmitter' peut accéder à 'message'. Pour démontrer l'utilisation du mot-clé "nonlocal", considérez cela :

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

Maintenant, que diriez-vous de renvoyer l'objet fonction plutôt que d'appeler la fonction imbriquée à l'intérieur. (Rappelez-vous que même les fonctions sont des objets. (C'est Python.))

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

Et nous appelons la fonction comme suit :

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter
        
    fun2 = transmit_to_space("Burn the Sun!")
    fun2()

Même si l'exécution de "transmit_to_space()" était terminée, le message était plutôt conservé. Cette technique par laquelle les données sont attachées à du code même après la fin de ces autres fonctions d'origine est appelée fermetures en Python.

AVANTAGE : Les fermetures peuvent éviter l'utilisation de variables globales et offrent une certaine forme de masquage des données (par exemple, lorsqu'il y a peu de méthodes dans une classe, utilisez des fermetures à la place).

De plus, les décorateurs en Python font un usage intensif des fermetures.

Exercise
--------

Make a nested loop and a python closure to make functions to get multiple multiplication functions using closures. That is using closures, one could make functions to create multiply_with_5() or multiply_with_4() functions using closures.

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