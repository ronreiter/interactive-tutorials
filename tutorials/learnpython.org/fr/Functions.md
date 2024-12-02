Tutorial
--------

### Qu'est-ce qu'une fonction ?

Les fonctions sont un moyen pratique de diviser votre code en blocs utiles, nous permettant d'organiser notre code, de le rendre plus lisible, de le réutiliser et de gagner du temps. De plus, les fonctions sont un moyen clé de définir des interfaces afin que les programmeurs puissent partager leur code.

### Comment écrire des fonctions en Python ?

Comme nous l'avons vu dans les tutoriels précédents, Python utilise des blocs.

Un bloc est une zone de code écrite dans le format :

    block_head:
        1st block line
        2nd block line
        ...

Où une ligne de bloc est du code Python (même un autre bloc), et la tête de bloc est du format suivant :
block_keyword block_name(argument1,argument2, ...)
Les mots clés de bloc que vous connaissez déjà sont "if", "for" et "while".

Les fonctions en python sont définies en utilisant le mot clé de bloc "def", suivi du nom de la fonction en tant que nom du bloc.
Par exemple :

    def my_function():
        print("Hello From My Function!")


Les fonctions peuvent également recevoir des arguments (variables passées de l'appelant à la fonction).
Par exemple :

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Les fonctions peuvent renvoyer une valeur à l'appelant, en utilisant le mot clé 'return'.
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

    # imprime un simple bonjour
    my_function()

    # imprime - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # après cette ligne x contiendra la valeur 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

In this exercise you'll use an existing function, and while adding your own to create a fully functional program.

1. Add a function named `list_benefits()` that returns the following list of strings: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Add a function named `build_sentence(info)` which receives a single argument containing a string and returns a sentence starting with the given string and ending with the string " is a benefit of functions!"

3. Run and see all the functions work together!

Tutorial Code
-------------

# Modifier cette fonction pour qu'elle retourne une liste de chaînes comme défini ci-dessus
def list_benefits():
    return []

# Modifier cette fonction pour transformer chaque avantage en - " is a benefit of functions!"
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

# Modifier cette fonction pour qu'elle retourne une liste de chaînes comme défini ci-dessus
def list_benefits():
    return "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

# Modifier cette fonction pour transformer chaque avantage en - " is a benefit of functions!"
def build_sentence(benefit):
    return "%s is a benefit of functions!" % benefit


def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()