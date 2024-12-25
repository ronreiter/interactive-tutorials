Les décorateurs vous permettent de faire des modifications simples aux objets appelables comme [fonctions](http://www.learnpython.org/en/Functions ""), [méthodes, ou classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Nous allons nous concentrer sur les fonctions pour ce tutoriel. La syntaxe

    @decorator
    def functions(arg):
        return "value"

est équivalente à :

    def function(arg):
        return "value"
    function = decorator(function) # ceci passe la fonction au décorateur, et la réassigne à la fonction

Comme vous l'avez peut-être vu, un décorateur est juste une autre fonction qui prend une fonction et en retourne une. Par exemple, vous pourriez faire ceci :

    def repeater(old_function):
        def new_function(*args, **kwds): # Voir learnpython.org/en/Multiple%20Function%20Arguments pour savoir comment *args et **kwds fonctionnent
            old_function(*args, **kwds) # nous exécutons l'ancienne fonction
            old_function(*args, **kwds) # nous la faisons deux fois
        return new_function # nous devons retourner la nouvelle fonction, sinon elle ne se réassigne pas à la valeur

Cela ferait qu'une fonction se répète deux fois.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Vous pouvez aussi faire en sorte de changer la sortie

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifier la valeur de retour
        return new_function

changer l'entrée

    def double_Ii(old_function):
        def new_function(arg): # ne fonctionne que si l'ancienne fonction a un argument
            return old_function(arg * 2) # modifier l'argument passé
        return new_function

et faire des vérifications.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Cela provoque une erreur, ce qui est mieux que faire la mauvaise chose
            old_function(arg)
        return new_function

Disons que vous voulez multiplier la sortie par une quantité variable. Vous pourriez définir le décorateur et l'utiliser comme suit :

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
        
    # Maintenant return_num est décoré et réassigné à lui-même
    return_num(5) # devrait retourner 15

 Vous pouvez faire ce que vous voulez avec l'ancienne fonction, même l'ignorer complètement ! Les décorateurs avancés peuvent également manipuler la chaîne de documentation et le nombre d'arguments. Pour des décorateurs astucieux, allez sur <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercice
--------
Créez une fabrique de décorateurs qui retourne un décorateur qui décore des fonctions avec un argument. La fabrique doit prendre un argument, un type, puis retourner un décorateur qui doit vérifier si l'entrée est du bon type. Si ce n'est pas le cas, elle doit imprimer("Mauvais type") (En réalité, elle devrait lever une erreur, mais la levée d'erreur n'est pas dans ce tutoriel). Regardez le code du tutoriel et la sortie attendue pour voir ce qu'il en est si vous êtes confus (je sais que je le serais). Utiliser isinstance(object, type_of_object) ou type(object) pourrait aider.