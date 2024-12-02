Tutorial
--------

Un dictionnaire est un type de données similaire aux tableaux, mais il fonctionne avec des clés et des valeurs au lieu d'index. Chaque valeur stockée dans un dictionnaire peut être accédée en utilisant une clé, qui peut être n'importe quel type d'objet (une chaîne, un nombre, une liste, etc.) au lieu d'utiliser son index pour l'adresser.

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

Les dictionnaires peuvent être itérés, tout comme une liste. Cependant, un dictionnaire, contrairement à une liste, ne conserve pas l'ordre des valeurs stockées. Pour itérer sur les paires clé-valeur, utilisez la syntaxe suivante :

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Suppression d'une valeur

Pour supprimer un index spécifié, utilisez l'une des notations suivantes :

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

ou :

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercice
--------

Ajoutez "Jake" au répertoire avec le numéro de téléphone 938273443, et supprimez Jill du répertoire.

Tutorial Code
-------------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  
# votre code va ici

# code de test
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")  


Expected Output
---------------

test_output_contains("Jake is listed in the phonebook.")
test_output_contains("Jill is not listed in the phonebook.")
success_msg("Nice work!")

Solution
--------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  

# votre code va ici
phonebook["Jake"] = 938273443  
del phonebook["Jill"]  

# code de test
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")  