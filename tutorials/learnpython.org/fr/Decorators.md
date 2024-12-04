Tutorial
--------

Les décorateurs vous permettent de faire des modifications simples sur des objets appelables comme [fonctions](http://www.learnpython.org/en/Functions ""), [méthodes ou classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Nous allons traiter des fonctions pour ce tutoriel. La syntaxe

    @decorator
    def functions(arg):
        return "value"

Est équivalente à :

    def function(arg):
        return "value"
    function = decorator(function) # cela passe la fonction au décorateur, et la réassigne aux fonctions

Comme vous avez pu le voir, un décorateur est juste une autre fonction qui prend une fonction et en retourne une. Par exemple, vous pourriez faire ceci :

    def repeater(old_function):
        def new_function(*args, **kwds): # Voir learnpython.org/en/Multiple%20Function%20Arguments pour comprendre comment fonctionnent *args et **kwds
            old_function(*args, **kwds) # nous exécutons l'ancienne fonction
            old_function(*args, **kwds) # nous le faisons deux fois
        return new_function # nous devons retourner la new_function, sinon elle ne la réaffecterait pas à la valeur

Cela ferait qu'une fonction se répète deux fois.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Vous pouvez aussi en modifier la sortie

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifie la valeur de retour
        return new_function

modifier l'entrée

    def double_Ii(old_function):
        def new_function(arg): # ne fonctionne que si la vieille fonction a un argument
            return old_function(arg * 2) # modifie l'argument passé
        return new_function

et faire des vérifications.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Cela provoque une erreur, ce qui est mieux que de faire quelque chose de faux
            old_function(arg)
        return new_function

Disons que vous voulez multiplier la sortie par une quantité variable. Vous pourriez définir le décorateur et l'utiliser comme suit :

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # elle renvoie le nouveau générateur
    
    # Usage
    @multiply(3) # multiply n'est pas un générateur, mais multiply(3) l'est
    def return_num(num):
        return num
        
    # Maintenant, return_num est décoré et réassigné à lui-même
    return_num(5) # devrait renvoyer 15

Vous pouvez faire ce que vous voulez avec l'ancienne fonction, même l'ignorer complètement ! Les décorateurs avancés peuvent également manipuler la chaîne de documentation et le nombre d'arguments.
Pour des décorateurs épatants, rendez-vous sur <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercice
-------
Créez une fabrique de décorateurs qui renvoie un décorateur qui décore les fonctions avec un argument. La fabrique doit prendre un argument, un type, puis retourner un décorateur qui fait que la fonction doit vérifier si l'entrée est du bon type. Si ce n'est pas le cas, elle doit imprimer("Bad Type") (En réalité, elle devrait lever une erreur, mais la levée d'erreur n'est pas dans ce tutoriel). Regarder le code du tutoriel et le résultat attendu pour voir ce que c'est si vous êtes confus (je le serais aussi). Utiliser isinstance(object, type_of_object) ou type(object) pourrait aider.

Tutorial Code
-------------
def type_check(correct_type):
    #put code here

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])


Expected Output
---------------

test_output_contains("4")
test_output_contains("Bad Type")
test_output_contains("H")
test_output_contains("Bad Type")
success_msg("Good job!")

Solution
--------

def type_check(correct_type):
    def check(old_function):
        def new_function(arg):
            if (isinstance(arg, correct_type)):
                return old_function(arg)
            else:
                print("Bad Type")
        return new_function
    return check

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])