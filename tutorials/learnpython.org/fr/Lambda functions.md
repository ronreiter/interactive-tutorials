Tutoriel
--------

Normalement, nous définissons une fonction en utilisant le mot-clé `def` quelque part dans le code et l'appelons chaque fois que nous avons besoin de l'utiliser.

```python
def sum(a,b):
    return a + b

a = 1
b = 2
c = sum(a,b)
print(c)
```

Au lieu de définir la fonction quelque part et de l'appeler, nous pouvons utiliser les fonctions lambda de Python, qui sont des fonctions en ligne définies à l'endroit même où nous les utilisons. Ainsi, nous n'avons pas besoin de déclarer une fonction quelque part et de revisiter le code juste pour une utilisation unique.

Elles n'ont pas besoin d'avoir un nom, c'est pourquoi elles sont également appelées fonctions anonymes. Nous définissons une fonction lambda en utilisant le mot-clé `lambda`.

```python
your_function_name = lambda inputs : output
```

Ainsi, l'exemple de somme ci-dessus utilisant une fonction lambda serait :

```python
a = 1
b = 2
sum = lambda x,y : x + y
c = sum(a,b)
print(c)
```

Ici, nous attribuons la fonction lambda à la variable **sum**, et en fournissant les arguments c'est-à-dire `a` et `b`, elle fonctionne comme une fonction normale.

Exercice
--------

Écrivez un programme utilisant des fonctions lambda pour vérifier si un nombre dans la liste donnée est impair. Imprimez "True" si le nombre est impair ou "False" sinon pour chaque élément.

Tutorial Code
-------------
l = [2,4,7,3,14,19]
for i in l:
    # your code here

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
    # your code here
    my_lambda = lambda x : (x % 2) == 1
    print(my_lambda(i))