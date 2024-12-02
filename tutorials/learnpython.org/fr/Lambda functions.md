Tutorial
--------

Normalement, nous définissons une fonction en utilisant le mot-clé `def` quelque part dans le code et nous l'appelons chaque fois que nous avons besoin de l'utiliser.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Maintenant, au lieu de définir la fonction quelque part et de l'appeler, nous pouvons utiliser les fonctions lambda de Python, qui sont des fonctions en ligne définies à l'endroit même où nous les utilisons. Nous n'avons donc pas besoin de déclarer une fonction quelque part et de revenir sur le code juste pour une utilisation unique.

Elles n'ont pas besoin d'avoir un nom, c'est pourquoi on les appelle aussi fonctions anonymes. Nous définissons une fonction lambda en utilisant le mot-clé `lambda`.

    your_function_name = lambda inputs : output

Ainsi, l'exemple de somme ci-dessus en utilisant la fonction lambda serait,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Ici, nous assignons la fonction lambda à la variable **sum**, et en fournissant les arguments, c'est-à-dire a et b, elle fonctionne comme une fonction normale.

Exercise
--------
Write a program using lambda functions to check if a number in the given list is odd. Print "True" if the number is odd or "False" if not for each element.

Tutorial Code
-------------
l = [2,4,7,3,14,19]
for i in l:
    # votre code ici

Expected Output
---------------
test_output_contains("False")
test_output_contains("False")
test_output_contains("True")
test_output_contains("True")
test_output_contains("False")
test_output_contains("True")
success_msg("Nice work!")

Solution
--------
l = [2,4,7,3,14,19]
for i in l:
    # votre code ici
    my_lambda = lambda x : (x % 2) == 1
    print(my_lambda(i))