Tutorial
--------

Les décorateurs vous permettent de faire de simples modifications aux objets appelables comme les [fonctions](http://www.learnpython.org/en/Functions ""), [méthodes ou classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Nous traiterons les fonctions pour ce tutoriel. La syntaxe

    @decorator
    def functions(arg):
        return "value"

Est équivalente à :

    def function(arg):
        return "value"
    function = decorator(function) # ceci passe la fonction au décorateur et la réassigne aux fonctions

Comme vous l'avez peut-être vu, un décorateur est juste une autre fonction qui prend une fonction et en retourne une. Par exemple, vous pourriez faire cela :

    def repeater(old_function):
        def new_function(*args, **kwds): # Voyez learnpython.org/en/Multiple%20Function%20Arguments pour savoir comment *args et **kwds fonctionnent
            old_function(*args, **kwds) # nous exécutons la vieille fonction
            old_function(*args, **kwds) # nous le faisons deux fois
        return new_function # nous devons retourner la new_function, sinon elle ne la réassignerait pas à la valeur

Cela permettrait à une fonction d'être répétée deux fois.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Vous pouvez aussi le faire changer la sortie

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifie la valeur de retour
        return new_function

changer l'entrée

    def double_Ii(old_function):
        def new_function(arg): # ne fonctionne que si l'ancienne fonction a un argument
            return old_function(arg * 2) # modifie l'argument transmis
        return new_function

et faire des vérifications.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Argument Négatif") # Cela provoque une erreur, ce qui est mieux que de faire le mauvais choix
            old_function(arg)
        return new_function

Disons que vous voulez multiplier la sortie par un montant variable. Vous pourriez définir le décorateur et l’utiliser comme suit : 

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # il retourne le nouveau générateur
    
    # Utilisation
    @multiply(3) # multiply n'est pas un générateur, mais multiply(3) l'est
    def return_num(num):
        return num
        
    # Maintenant return_num est décorée et réassignée à elle-même
    return_num(5) # devrait retourner 15

 Vous pouvez faire ce que vous voulez avec l'ancienne fonction, même l'ignorer complètement ! Les décorateurs avancés peuvent également manipuler la chaîne de documentation et le nombre d'arguments. Pour des décorateurs élégants, allez sur <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Créez une fabrique de décorateurs qui retourne un décorateur qui décore les fonctions avec un argument. La fabrique doit prendre un argument, un type, puis retourne un décorateur qui s'assure que la fonction vérifie si l'entrée est du bon type. Si c'est faux, elle doit imprimer("Mauvais Type") (En réalité, elle devrait lever une erreur, mais la levée d'erreurs n'est pas dans ce tutoriel). Regardez le code du tutoriel et la sortie attendue pour voir ce que c'est si vous êtes confus (Je sais que je le serais.). Utiliser isinstance(object, type_of_object) ou type(object) pourrait aider.

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