Dekoratorer låter dig göra enkla modifieringar på anropsbara objekt som [funktioner](http://www.learnpython.org/en/Functions ""), [metoder eller klasser](http://www.learnpython.org/en/Classes%20and%20Objects ""). Vi kommer att hantera funktioner i denna handledning. Syntaxen

@decorator
def functions(arg):
    return "value"

Är ekvivalent med:

def function(arg):
    return "value"
function = decorator(function) # det här skickar funktionen till dekoratorn och tilldelar om den till funktionen

Som du kanske har sett är en dekorator bara en annan funktion som tar en funktion och returnerar en. Till exempel kan du göra detta:

def repeater(old_function):
    def new_function(*args, **kwds): # Se learnpython.org/en/Multiple%20Function%20Arguments för hur *args och **kwds fungerar
        old_function(*args, **kwds) # vi kör den gamla funktionen
        old_function(*args, **kwds) # vi gör det två gånger
    return new_function # vi måste returnera new_function, annars skulle det inte tilldelas om till värdet

Detta skulle få en funktion att upprepas två gånger.

>>> @repeater
def multiply(num1, num2):
    print(num1 * num2)

>>> multiply(2, 3)
6
6

Du kan också få den att ändra utdata

def double_out(old_function):
    def new_function(*args, **kwds):
        return 2 * old_function(*args, **kwds) # modifiera returvärdet
    return new_function

ändra input

def double_Ii(old_function):
    def new_function(arg): # fungerar bara om den gamla funktionen har ett argument
        return old_function(arg * 2) # modifiera det passerade argumentet
    return new_function

och göra kontroller.

def check(old_function):
    def new_function(arg):
        if arg < 0: raise (ValueError, "Negative Argument") # Detta orsakar ett fel, vilket är bättre än att det gör fel sak
        old_function(arg)
    return new_function

Låt oss säga att du vill multiplicera utdata med ett variabelt belopp. Du kan definiera dekoratorn och använda den så här:

def multiply(multiplier):
    def multiply_generator(old_function):
        def new_function(*args, **kwds):
            return multiplier * old_function(*args, **kwds)
        return new_function
    return multiply_generator # den returnerar den nya generatorn

# Användning
@multiply(3) # multiply är inte en generator, men multiply(3) är
def return_num(num):
    return num

# Nu är return_num dekorerad och tilldelas om till sig själv
return_num(5) # bör returnera 15

Du kan göra vad du vill med den gamla funktionen, även helt ignorera den! Avancerade dekoratorer kan också manipulera dokstringen och antalet argument.
För några snygga dekoratorer, gå till <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Övning
--------
Gör en dekoratorfabrik som returnerar en dekorator som dekorerar funktioner med ett argument. Fabriken ska ta ett argument, en typ, och sedan returnera en dekorator som gör att funktionen ska kontrollera om input är av rätt typ. Om det är fel, ska det skriva ut "Bad Type" (I verkligheten bör det höja ett fel, men att hantera fel är inte med i denna handledning). Titta på handledningskoden och förväntad utdata för att se vad det är om du är förvirrad (jag skulle nog vara det). Att använda isinstance(object, type_of_object) eller type(object) kan vara till hjälp.