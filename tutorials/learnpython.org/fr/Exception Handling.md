Tutoriel
--------

En programmation, les erreurs arrivent. C'est un fait de la vie. Peut-être que l'utilisateur a donné une mauvaise entrée. Peut-être qu'une ressource réseau était indisponible. Peut-être que le programme a manqué de mémoire. Ou le programmeur a même pu faire une erreur !

La solution de Python aux erreurs ce sont les exceptions. Vous avez peut-être déjà vu une exception auparavant.

```python
print(a)

#error
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'a' is not defined
```

Oups ! Oubli d'assigner une valeur à la variable 'a'.

Mais parfois, vous ne voulez pas que les exceptions arrêtent complètement le programme. Vous pourriez vouloir faire quelque chose de particulier lorsque qu'une exception est levée. Cela se fait dans un bloc *try/except*.

Voici un exemple trivial : Supposons que vous parcourez une liste. Vous devez parcourir 20 nombres, mais la liste est réalisée à partir d'entrées utilisateur et pourrait ne pas contenir 20 nombres. Après avoir atteint la fin de la liste, vous voulez que le reste des nombres soit interprété comme un 0. Voici comment vous pourriez faire cela :

```python
def do_stuff_with_number(n):
    print(n)

def catch_this():
    the_list = (1, 2, 3, 4, 5)

    for i in range(20):
        try:
            do_stuff_with_number(the_list[i])
        except IndexError: # Levée lors de l'accès à un index non existant d'une liste
            do_stuff_with_number(0)

catch_this()
```

Voilà, ce n'était pas trop difficile ! Vous pouvez faire cela avec n'importe quelle exception. Pour plus de détails sur la gestion des exceptions, ne cherchez pas plus loin que les [docs Python](http://docs.python.org/tutorial/errors.html#handling-exceptions).

Exercice
--------

Gérez toutes les exceptions ! Rappelez-vous les leçons précédentes pour retourner le nom de famille de l'acteur.

Tutorial Code
-------------

# Setup
actor = {"name": "John Cleese", "rank": "awesome"}

# Function to modify!!!
def get_last_name(): 
    return actor["last_name"]

# Test code
get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())

Expected Output
---------------

test_output_contains("Cleese")
test_output_contains("All exceptions caught! Good job!")
test_output_contains("The actor's last name is Cleese")
success_msg("Great work!")

Solution
--------
actor = {"name": "John Cleese", "rank": "awesome"}

def get_last_name():
    return actor["name"].split()[1]

get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())