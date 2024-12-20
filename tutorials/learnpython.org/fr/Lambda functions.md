Normally we define a function using the def keyword somewhere in the code and call it whenever we need to use it.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Au lieu de définir la fonction quelque part et de l'appeler, nous pouvons utiliser les fonctions lambda de Python, qui sont des fonctions en ligne définies à l'endroit même où nous les utilisons. Ainsi, nous n'avons pas besoin de déclarer une fonction quelque part et de revisiter le code juste pour une seule utilisation.

Elles n'ont pas besoin d'avoir un nom, donc elles sont aussi appelées fonctions anonymes. Nous définissons une fonction lambda en utilisant le mot clé lambda.

    your_function_name = lambda inputs : output

Ainsi, l'exemple de somme ci-dessus en utilisant une fonction lambda serait,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Ici, nous assignons la fonction lambda à la variable **sum**, et en fournissant les arguments, c'est-à-dire a et b, elle fonctionne comme une fonction normale.

Exercise
--------
Écrivez un programme utilisant des fonctions lambda pour vérifier si un nombre dans la liste donnée est impair. Imprimez "True" si le nombre est impair ou "False" sinon pour chaque élément.