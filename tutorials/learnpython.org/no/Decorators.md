Dekoratører lar deg gjøre enkle modifikasjoner til kallbare objekter som [funksjoner](http://www.learnpython.org/en/Functions ""), [metoder eller klasser](http://www.learnpython.org/en/Classes%20and%20Objects ""). I denne veiledningen skal vi behandle funksjoner. Syntaksen

@decorator
def functions(arg):
    return "value"

Er ekvivalent med:

def function(arg):
    return "value"
function = decorator(function) # dette sender funksjonen til dekoratøren, og reassignerer den til funksjoner

Som du kanskje har sett, er en dekoratør bare en annen funksjon som tar en funksjon og returnerer en. For eksempel kan du gjøre dette:

def repeater(old_function):
    def new_function(*args, **kwds): # Se learnpython.org/en/Multiple%20Function%20Arguments for hvordan *args og **kwds fungerer
        old_function(*args, **kwds) # vi kjører den gamle funksjonen
        old_function(*args, **kwds) # vi gjør det to ganger
    return new_function # vi må returnere new_function, ellers ville det ikke reassignere det til verdien

Dette ville få en funksjon til å gjenta seg to ganger.

>>> @repeater
def multiply(num1, num2):
    print(num1 * num2)

>>> multiply(2, 3)
6
6

Du kan også få den til å endre utdataene

def double_out(old_function):
    def new_function(*args, **kwds):
        return 2 * old_function(*args, **kwds) # modifiser returverdien
    return new_function

endre input

def double_Ii(old_function):
    def new_function(arg): # fungerer bare hvis den gamle funksjonen har ett argument
        return old_function(arg * 2) # modifiser argumentet som sendes
    return new_function

og utføre sjekking.

def check(old_function):
    def new_function(arg):
        if arg < 0: raise (ValueError, "Negative Argument") # Dette forårsaker en feil, som er bedre enn at det gjør feil ting
        old_function(arg)
    return new_function

La oss si at du vil multiplisere utdataene med en variabel mengde. Du kan definere dekoratøren og bruke den som følger:

def multiply(multiplier):
    def multiply_generator(old_function):
        def new_function(*args, **kwds):
            return multiplier * old_function(*args, **kwds)
        return new_function
    return multiply_generator # den returnerer den nye generatoren

# Bruk
@multiply(3) # multiply er ikke en generator, men multiply(3) er
def return_num(num):
    return num

# Nå er return_num dekorert og reassigned til seg selv
return_num(5) # bør returnere 15

Du kan gjøre hva du vil med den gamle funksjonen, til og med fullstendig ignorere den! Avanserte dekoratører kan også manipulere dokumentstrengen og antall argumenter. For noen fancy dekoratører, gå til <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Lag en dekoratørfabrikk som returnerer en dekoratør som dekorerer funksjoner med ett argument. Fabrikken skal ta ett argument, en type, og deretter returnere en dekoratør som gjør at funksjonen skal sjekke om inndataene er av riktig type. Hvis det er feil, skal det skrive ut ("Bad Type") (I realiteten bør det kaste en feil, men feilkasting er ikke med i denne veiledningen). Se på veiledningskoden og forventet utdata for å se hva det er hvis du er forvirret (det vet jeg at jeg ville vært). Bruk av isinstance(object, type_of_object) eller type(object) kan hjelpe.