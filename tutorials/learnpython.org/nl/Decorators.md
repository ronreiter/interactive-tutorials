Decorators stellen je in staat om eenvoudige wijzigingen aan te brengen in oproepbare objecten zoals [functies](http://www.learnpython.org/en/Functions ""), [methoden, of klassen](http://www.learnpython.org/en/Classes%20and%20Objects ""). In deze tutorial zullen we ons bezighouden met functies. De syntax

    @decorator
    def functions(arg):
        return "value"

Is gelijk aan:

    def function(arg):
        return "value"
    function = decorator(function) # dit geeft de functie door aan de decorator en wijst deze opnieuw toe aan de functies

Zoals je wellicht hebt gezien, is een decorator gewoon een andere functie die een functie neemt en er een teruggeeft. Bijvoorbeeld, je zou dit kunnen doen:

    def repeater(old_function):
        def new_function(*args, **kwds): # Zie leerpython.org/en/Multiple%20Function%20Arguments voor hoe *args en **kwds werken
            old_function(*args, **kwds) # we voeren de oude functie uit
            old_function(*args, **kwds) # we doen het twee keer
        return new_function # we moeten de new_function retourneren, anders zou het deze niet opnieuw toewijzen aan de waarde

Dit zou een functie twee keer laten herhalen.

Je kunt ook de uitvoer laten wijzigen

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # de geretourneerde waarde wijzigen
        return new_function

invoer wijzigen

    def double_Ii(old_function):
        def new_function(arg): # werkt alleen als de oude functie één argument heeft
            return old_function(arg * 2) # het doorgegeven argument wijzigen
        return new_function

en controleren uitvoeren.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negatief Argument") # Dit veroorzaakt een fout, wat beter is dan het verkeerde te doen
            old_function(arg)
        return new_function

Stel dat je de uitvoer met een variabel bedrag wilt vermenigvuldigen. Je zou de decorator kunnen definiëren en gebruiken als volgt:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # het retourneert de nieuwe generator

    # Gebruik
    @multiply(3) # multiply is geen generator, maar multiply(3) wel
    def return_num(num):
        return num

    # Nu is return_num gedecoreerd en opnieuw toegewezen aan zichzelf
    return_num(5) # zou 15 moeten retourneren

Je kunt alles doen wat je wilt met de oude functie, zelfs deze volledig negeren! Geavanceerde decorators kunnen ook de docstring en het aantal argumenten manipuleren. Voor enkele mooie decorators, ga naar <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Maak een decorateurfabriek die een decorateur retourneert die functies met één argument decoreert. De fabriek moet één argument nemen, een type, en dan een decorateur retourneren die ervoor zorgt dat de functie controleert of de invoer het correcte type heeft. Als het fout is, moet het printen("Verkeerd Type") (In werkelijkheid zou het een fout moeten geven, maar foutoplossing is niet in deze tutorial opgenomen). Gebruik eventueel isinstance(object, type_of_object) of type(object).