In JavaScript kan variabler og funksjoner bli innkapslet i et objekt. Dette kan gjøres ved bruk av klasser i ny syntax (ES6), eller med konstruktørfunksjoner i eldre i JavaScript.

Et objekt får sine variabler og funksjoner fra klasser. Klasser er i bunn og grunn en mal for å lage objekter.

En veldig enkel klasse kan se slik ut:

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

Vi skal forklare hvorfor du må inkludere "self" som en parameter litt senere. Først, for å tildele den ovenstående klassen (malen) til et objekt, vil du gjøre følgende:

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

    myobjectx = MyClass()

Nå holder variabelen "myobjectx" et objekt av klassen "MyClass" som inneholder variabelen og funksjonen definert innenfor klassen kalt "MyClass".

### Tilgang til objektvariabler

For å få tilgang til variabelen inne i det nyopprettede objektet "myobjectx" vil du gjøre følgende:

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

    myobjectx = MyClass()

    myobjectx.variable

For eksempel, vil det nedenfor skrive ut strengen "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Du kan lage flere ulike objekter av samme klasse (som har de samme variabler og funksjoner definert). Men, hvert objekt inneholder uavhengige kopier av variablene definert i klassen. For eksempel, hvis vi definerer et annet objekt med "MyClass" klassen og deretter endrer strengen i variabelen ovenfor:

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Så skriv ut begge verdiene
    print(myobjectx.variable)
    print(myobjecty.variable)


### Tilgang til objektfunksjoner

For å få tilgang til en funksjon inni et objekt bruker du en notasjon lik den for å få tilgang til en variabel:

    class MyClass:
        variable = "blah"

        def function(self):
            print("Dette er en melding inni klassen.")

    myobjectx = MyClass()

    myobjectx.function()

Det ovenstående vil skrive ut meldingen, "Dette er en melding inni klassen."

### __init__()

`__init__()` funksjonen er en spesiell funksjon som kalles når klassen initieres.
Den brukes til å gi verdier i en klasse.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Skriver ut '7'
    
Øvelse
--------

Vi har en klasse definert for kjøretøy. Lag to nye kjøretøy kalt car1 og car2.
Sett car1 til å være en rød kabriolet verdt $60,000.00 med navnet Fer, 
og car2 til å være en blå van kalt Jump som er verdt $10,000.00.