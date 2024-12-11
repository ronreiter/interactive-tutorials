Tutorial
--------
Lors de la programmation, des erreurs se produisent. C'est juste un fait de la vie. Peut-être que l'utilisateur a donné une mauvaise entrée. Peut-être qu'une ressource réseau était indisponible. Peut-être que le programme a manqué de mémoire. Ou le programmeur a peut-être même fait une erreur !

La solution de Python aux erreurs est les exceptions. Vous avez peut-être déjà vu une exception.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Oups ! Oublié d'assigner une valeur à la variable 'a'.

Mais parfois, vous ne voulez pas que les exceptions arrêtent complètement le programme. Vous pourriez vouloir faire quelque chose de spécial lorsque une exception est levée. Cela se fait dans un bloc *try/except*.

Voici un exemple trivial : Supposons que vous itérez sur une liste. Vous devez itérer sur 20 nombres, mais la liste est créée à partir de l'entrée utilisateur et pourrait ne pas contenir 20 nombres. Après avoir atteint la fin de la liste, vous voulez juste que le reste des nombres soit interprété comme un 0. Voici comment vous pourriez faire cela :

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

Voilà, ce n'était pas trop difficile ! Vous pouvez faire cela avec n'importe quelle exception. Pour plus de détails sur la gestion des exceptions, ne cherchez pas plus loin que les [Docs Python](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercice
--------

Gérez toutes les exceptions ! Pensez aux leçons précédentes pour renvoyer le nom de famille de l'acteur.

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