Quand on programme, des erreurs surviennent. C'est un fait de la vie. 
Peut-être que l'utilisateur a donné une mauvaise entrée. Peut-être qu'une ressource réseau était indisponible. Peut-être que le programme a manqué de mémoire. Ou le programmeur a peut-être même fait une erreur !

La solution de Python aux erreurs est les exceptions. Vous avez peut-être déjà vu une exception auparavant.

Oops ! Oublié d'assigner une valeur à la variable 'a'.

Mais parfois, vous ne voulez pas que les exceptions arrêtent complètement le programme. Vous pourriez vouloir faire quelque chose de spécial lorsqu'une exception est levée. Cela se fait dans un bloc *try/except*.

Voici un exemple trivial : Supposons que vous parcourez une liste. Vous devez parcourir 20 nombres, mais la liste provient de l'entrée utilisateur et pourrait ne pas contenir 20 nombres. Après avoir atteint la fin de la liste, vous souhaitez simplement que les nombres restants soient interprétés comme un 0. Voici comment vous pourriez faire cela :

Là, ce n'était pas trop difficile ! Vous pouvez faire cela avec n'importe quelle exception. Pour plus de détails sur la gestion des exceptions, ne cherchez pas plus loin que les [Docs Python](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Gérez toutes les exceptions ! Rappelez-vous des leçons précédentes pour retourner le nom de famille de l'acteur.