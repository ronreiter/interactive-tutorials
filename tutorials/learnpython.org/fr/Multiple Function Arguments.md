Chaque fonction en Python reçoit un nombre prédéfini d'arguments, si elle est déclarée normalement, comme ceci :

Il est possible de déclarer des fonctions qui reçoivent un nombre variable d'arguments, en utilisant la syntaxe suivante :

La variable "therest" est une liste de variables, qui reçoit tous les arguments donnés à la fonction "foo" après les 3 premiers arguments. Ainsi, appeler `foo(1, 2, 3, 4, 5)` affichera :

Il est également possible d'envoyer des arguments de fonction par mot-clé, de sorte que l'ordre des arguments n'a pas d'importance, en utilisant la syntaxe suivante. Le code suivant produit l'affichage suivant : 
```The sum is: 6
    Result: 1```

La fonction "bar" reçoit 3 arguments. Si un argument supplémentaire "action" est reçu, et qu'il indique de sommer les nombres, alors la somme est affichée. Alternativement, la fonction sait également qu'elle doit renvoyer le premier argument si la valeur du paramètre "number", passé dans la fonction, est égale à "first".

Exercise
--------

Remplissez les fonctions `foo` et `bar` afin qu'elles puissent recevoir un nombre variable d'arguments (3 ou plus) La fonction `foo` doit retourner la quantité d'arguments supplémentaires reçus. La `bar` doit retourner `True` si l'argument avec le mot-clé `magicnumber` vaut 7, et `False` sinon.