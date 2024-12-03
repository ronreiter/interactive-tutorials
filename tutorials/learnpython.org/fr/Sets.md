Tutorial
--------

Les ensembles sont des listes sans entrées dupliquées. Disons que vous voulez collecter une liste de mots utilisés dans un paragraphe :

    print(set("my name is Eric and Eric is my name".split()))

Cela affichera une liste contenant "my", "name", "is", "Eric", et finalement "and". Comme le reste de la phrase utilise des mots qui se trouvent déjà dans l'ensemble, ils ne sont pas insérés deux fois.

Les ensembles sont un outil puissant en Python car ils ont la capacité de calculer les différences et les intersections entre d'autres ensembles. Par exemple, disons que vous avez une liste de participants aux événements A et B :

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Pour découvrir quels membres ont assisté aux deux événements, vous pouvez utiliser la méthode "intersection" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Pour savoir quels membres n'ont assisté qu'à un seul des événements, utilisez la méthode "symmetric_difference" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Pour savoir quels membres ont assisté uniquement à un événement et pas à l'autre, utilisez la méthode "difference" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Pour recevoir une liste de tous les participants, utilisez la méthode "union" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Dans l'exercice ci-dessous, utilisez les listes données pour imprimer un ensemble contenant tous les participants de l'événement A qui n'ont pas assisté à l'événement B.

Code d'Exercice
---------------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

Expected Output
---------------
test_output_contains("['Jake', 'Eric']")
success_msg("Nice work!")

Solution
--------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

A = set(a)
B = set(b)

print(A.difference(B))