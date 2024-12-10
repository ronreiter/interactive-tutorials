# Fonctions
### Qu'est-ce qu'une Fonction ?

Les fonctions sont un moyen pratique de diviser votre code en blocs utiles, nous permettant de structurer notre code, de le rendre plus lisible, de le réutiliser et de gagner du temps. De plus, les fonctions sont un élément clé pour définir des interfaces afin que les programmeurs puissent partager leur code.

### Comment écrire des fonctions en Python ?

Comme nous l'avons vu dans les tutoriels précédents, Python utilise des blocs.

Un bloc est une zone de code écrite au format :

    en-tête_du_bloc:
        1ère ligne du bloc
        2ème ligne du bloc
        ...

Où une ligne de bloc est plus de code Python (voire un autre bloc), et l'en-tête du bloc est au format suivant :  
mot_cle_bloc nom_du_bloc(argument1, argument2, ...)
Les mots-clés de bloc que vous connaissez déjà sont "if", "for", et "while".

Les fonctions en Python sont définies à l'aide du mot-clé de bloc "def", suivi du nom de la fonction comme nom du bloc. Par exemple :

    def my_function():
        print("Hello From My Function!")


Les fonctions peuvent également recevoir des arguments (des variables passées de l'appelant à la fonction).  
Par exemple :

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Les fonctions peuvent retourner une valeur à l'appelant, en utilisant le mot-clé 'return'.  
Par exemple :

    def sum_two_numbers(a, b):
        return a + b

### Comment appeler des fonctions en Python ?

Il suffit d'écrire le nom de la fonction suivi de (), en plaçant les arguments requis entre les parenthèses.  
Par exemple, appelons les fonctions écrites ci-dessus (dans l'exemple précédent) :

    # Définir nos 3 fonctions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # imprimer une salutation simple
    my_function()

    # imprime - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # après cette ligne x contiendra la valeur 3 !
    x = sum_two_numbers(1,2)  


Exercice
--------

Dans cet exercice, vous utiliserez une fonction existante et en ajouterez une propre pour créer un programme pleinement fonctionnel.

1. Ajoutez une fonction nommée `list_benefits()` qui retourne la liste suivante de chaînes de caractères : "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Ajoutez une fonction nommée `build_sentence(info)` qui reçoit un argument contenant une chaîne de caractères et retourne une phrase commençant par la chaîne donnée et se terminant par la chaîne " is a benefit of functions!"

3. Exécutez et voyez toutes les fonctions travailler ensemble!

Tutorial Code
-------------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return []

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return ""

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()


Expected Output
---------------

test_output_contains("More organized code is a benefit of functions!")
test_output_contains("More readable code is a benefit of functions!")
test_output_contains("Easier code reuse is a benefit of functions!")
test_output_contains("Allowing programmers to share and connect code together is a benefit of functions!")
success_msg("Nice work!")

Solution
--------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return "%s is a benefit of functions!" % benefit


def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()