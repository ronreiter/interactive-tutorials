Tutorial
--------

Les ensembles sont des listes sans doublons. Supposons que vous souhaitiez recueillir une liste de mots utilisés dans un paragraphe :

    print(set("my name is Eric and Eric is my name".split()))

Cela imprimera une liste contenant "my", "name", "is", "Eric", et enfin "and". Étant donné que le reste de la phrase utilise des mots qui sont déjà dans l'ensemble, ils ne sont pas insérés deux fois.

Les ensembles sont un outil puissant en Python car ils ont la capacité de calculer les différences et les intersections entre d'autres ensembles. Par exemple, disons que vous avez une liste de participants aux événements A et B :

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Pour savoir quels membres ont assisté aux deux événements, vous pouvez utiliser la méthode "intersection" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Pour savoir quels membres ont assisté à un seul des événements, utilisez la méthode "symmetric_difference" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Pour savoir quels membres ont assisté à un seul événement et pas à l'autre, utilisez la méthode "difference" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Pour recevoir une liste de tous les participants, utilisez la méthode "union" :

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Dans l'exercice ci-dessous, utilisez les listes fournies pour imprimer un ensemble contenant tous les participants de l'événement A qui n'ont pas assisté à l'événement B.

Exercise
--------

Utilisez les listes ci-dessous pour imprimer un ensemble contenant tous les participants de l'événement A qui n'ont pas assisté à l'événement B.