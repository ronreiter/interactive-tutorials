Normalt definierar vi en funktion med hjälp av nyckelordet `def` någonstans i koden och anropar den när vi behöver använda den.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Istället för att definiera funktionen någonstans och anropa den, kan vi använda Pythons lambda-funktioner, som är inline-funktioner definierade på samma plats där vi använder dem. Så vi behöver inte deklarera en funktion någonstans och återkomma till koden bara för en enstaka användning.

De behöver inte ha ett namn, så de kallas också anonyma funktioner. Vi definierar en lambda-funktion med hjälp av nyckelordet `lambda`.

    your_function_name = lambda inputs : output

Så det ovanstående exempel med summan med hjälp av lambda-funktion skulle vara,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Här tilldelar vi lambda-funktionen till variabeln **sum**, och när vi ger argumenten, dvs. a och b, fungerar den som en vanlig funktion.

Övning
--------
Skriv ett program med hjälp av lambda-funktioner för att kontrollera om ett tal i den angivna listan är udda. Skriv ut "True" om talet är udda eller "False" om inte för varje element.