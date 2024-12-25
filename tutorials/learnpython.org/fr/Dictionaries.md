Un dictionnaire est un type de données similaire aux tableaux, mais fonctionne avec des clés et des valeurs au lieu d'indices. Chaque valeur stockée dans un dictionnaire peut être accessible à l'aide d'une clé, qui peut être n'importe quel type d'objet (une chaîne, un nombre, une liste, etc.) au lieu d'utiliser son indice pour y accéder.

Par exemple, une base de données de numéros de téléphone pourrait être stockée en utilisant un dictionnaire comme ceci :

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternativement, un dictionnaire peut être initialisé avec les mêmes valeurs dans la notation suivante :

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Itération sur les dictionnaires

Les dictionnaires peuvent être parcourus, tout comme une liste. Cependant, un dictionnaire, contrairement à une liste, ne garde pas l'ordre des valeurs qu'il contient. Pour itérer sur les paires clé-valeur, utilisez la syntaxe suivante :

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Suppression d'une valeur

Pour supprimer un indice spécifié, utilisez l'une des notations suivantes :

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

ou :

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercice
--------

Ajoutez "Jake" au carnet d'adresses avec le numéro de téléphone 938273443, et retirez Jill du carnet d'adresses.