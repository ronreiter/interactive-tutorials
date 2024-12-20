Il existe deux types de boucles en Python, `for` et `while`.

### La boucle "for"

Les boucles `for` itèrent sur une séquence donnée. Voici un exemple :

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Les boucles `for` peuvent itérer sur une séquence de nombres en utilisant les fonctions `range` et `xrange`. La différence entre `range` et `xrange` est que la fonction `range` retourne une nouvelle liste avec les nombres de cette plage spécifiée, alors que `xrange` retourne un itérateur, ce qui est plus efficace. (Python 3 utilise la fonction `range`, qui fonctionne comme `xrange`). Notez que la fonction `range` commence à zéro.

    # Affiche les nombres 0,1,2,3,4
    for x in range(5):
        print(x)

    # Affiche 3,4,5
    for x in range(3, 6):
        print(x)

    # Affiche 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Boucles "while"

Les boucles `while` se répètent tant qu'une certaine condition booléenne est vraie. Par exemple :

    # Affiche 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Cela équivaut à count = count + 1

### Instructions "break" et "continue"

**break** est utilisé pour sortir d'une boucle `for` ou `while`, tandis que **continue** est utilisé pour passer le bloc actuel et revenir à l'instruction "for" ou "while". Voici quelques exemples :

    # Affiche 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Affiche uniquement les chiffres impairs - 1,3,5,7,9
    for x in range(10):
        # Vérifie si x est pair
        if x % 2 == 0:
            continue
        print(x)

### Peut-on utiliser la clause "else" pour les boucles ?

Contrairement à des langages comme C, CPP.. nous pouvons utiliser **else** avec les boucles. Lorsque la condition de la boucle du "for" ou "while" échoue, alors la partie de code dans "else" est exécutée. Si une instruction **break** est exécutée à l'intérieur de la boucle `for`, alors la partie "else" est ignorée. Notez que la partie "else" est exécutée même s'il y a une instruction **continue**.

Voici quelques exemples :

    # Affiche 0,1,2,3,4 puis affiche "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Affiche 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("ceci n'est pas imprimé car la boucle for est terminée à cause du break et non en raison de l'échec de la condition")


Exercice
--------

Parcourez et imprimez tous les nombres pairs de la liste `numbers` dans le même ordre qu'ils sont reçus. N'imprimez aucun nombre qui vient après 237 dans la séquence.