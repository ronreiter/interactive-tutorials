Dekoratorer giver dig mulighed for at lave enkle ændringer til callable objekter som [funktioner](http://www.learnpython.org/en/Functions ""), [metoder eller klasser](http://www.learnpython.org/en/Classes%20and%20Objects ""). Vi vil beskæftige os med funktioner i denne tutorial. Syntaksen

    @decorator
    def functions(arg):
        return "value"

Er ækvivalent med:

    def function(arg):
        return "value"
    function = decorator(function) # dette sender funktioner til dekoratoren og tildeler det til funktionerne igen

Som du måske har set, er en dekorator blot en anden funktion, som tager en funktion og returnerer en. For eksempel kan du gøre dette:

    def repeater(old_function):
        def new_function(*args, **kwds): # Se learnpython.org/en/Multiple%20Function%20Arguments for hvordan *args og **kwds fungerer
            old_function(*args, **kwds) # vi kører den gamle funktion
            old_function(*args, **kwds) # vi gør det to gange
        return new_function # vi er nødt til at returnere new_function, ellers ville det ikke tildele det til værdien igen

Dette vil få en funktion til at gentage sig to gange.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Du kan også ændre output

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # ændre returværdien
        return new_function

ændre input

    def double_Ii(old_function):
        def new_function(arg): # fungerer kun hvis den gamle funktion har et argument
            return old_function(arg * 2) # ændre det argument der gives
        return new_function

og lave kontrol.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Dette forårsager en fejl, hvilket er bedre end at gøre det forkerte
            old_function(arg)
        return new_function

Lad os sige, du vil multiplicere output med et variabelt beløb. Du kunne definere dekoratoren og bruge den som følger:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # det returnerer den nye generator
    
    # Brug
    @multiply(3) # multiplicer er ikke en generator, men multiply(3) er
    def return_num(num):
        return num
        
    # Nu er return_num dekoreret og tildelt til sig selv igen
    return_num(5) # burde returnere 15

Du kan gøre alt, hvad du vil, med den gamle funktion, selv fuldstændig ignorere den! Avancerede dekoratorer kan også manipulere doc stringen og antallet af argumenter.
For nogle flotte dekoratorer, gå til <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Øvelse
--------
Lav en dekoratorfabrik, som returnerer en dekorator, der dekorerer funktioner med et argument. Fabrikken skal tage et argument, en type, og derefter returnere en dekorator, der skal få funktionen til at tjekke, om inputtet er af den korrekte type. Hvis det er forkert, skal den printe("Bad Type") (i virkeligheden bør den rejse en fejl, men fejlrejsning er ikke en del af denne tutorial). At bruge isinstance(object, type_of_object) eller type(object) kan hjælpe.