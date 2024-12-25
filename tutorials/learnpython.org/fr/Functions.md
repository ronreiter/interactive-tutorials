### Qu'est-ce qu'une Fonction ?

Les fonctions sont un moyen pratique de diviser votre code en blocs utiles, ce qui nous permet d'organiser notre code, de le rendre plus lisible, de le réutiliser et de gagner du temps. De plus, les fonctions sont un moyen clé de définir des interfaces afin que les programmeurs puissent partager leur code.

### Comment écrire des fonctions en Python ?

Comme nous l'avons vu dans les tutoriels précédents, Python utilise des blocs.

Un bloc est une zone de code écrit dans le format suivant :

    block_head:
        1ère ligne du bloc
        2ème ligne du bloc
        ...

Où une ligne de bloc contient plus de code Python (même un autre bloc), et le bloc head a le format suivant :
block_keyword block_name(argument1,argument2, ...)
Les mots-clés de bloc que vous connaissez déjà sont "if", "for", et "while".

Les fonctions en Python sont définies à l'aide du mot-clé de bloc "def", suivi du nom de la fonction comme nom du bloc. Par exemple :

    def my_function():
        print("Hello From My Function!")


Les fonctions peuvent également recevoir des arguments (variables passées de l'appelant à la fonction). Par exemple :

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Les fonctions peuvent retourner une valeur à l'appelant, en utilisant le mot-clé 'return' . Par exemple :

    def sum_two_numbers(a, b):
        return a + b

### Comment appeler des fonctions en Python ?

Il suffit d'écrire le nom de la fonction suivi de (), en plaçant tous les arguments requis entre les crochets. Par exemple, appelons les fonctions écrites ci-dessus (dans l'exemple précédent) :

    # Définissons nos 3 fonctions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # imprimez une salutation simple
    my_function()

    # imprime - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # après cette ligne x contiendra la valeur 3!
    x = sum_two_numbers(1,2)  


Exercice
--------

Dans cet exercice, vous utiliserez une fonction existante, tout en ajoutant la vôtre pour créer un programme entièrement fonctionnel.

1. Ajoutez une fonction nommée `list_benefits()` qui retourne la liste suivante de chaînes de caractères : "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together".

2. Ajoutez une fonction nommée `build_sentence(info)` qui reçoit un argument contenant une chaîne de caractères et retourne une phrase commençant par la chaîne donnée et se terminant par la chaîne " is a benefit of functions!".

3. Exécutez et voyez toutes les fonctions travailler ensemble !