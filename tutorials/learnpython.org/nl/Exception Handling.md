Wanneer je programmeert, gebeuren er fouten. Het is gewoon een feit van het leven. Misschien heeft de gebruiker onjuiste invoer gegeven. Misschien was een netwerkbron niet beschikbaar. Misschien was het geheugen van het programma op. Of de programmeur heeft zelfs een fout gemaakt!

Python's oplossing voor fouten zijn uitzonderingen. Je hebt misschien al eerder een uitzondering gezien.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Oeps! Vergeet een waarde toe te wijzen aan de variabele 'a'.

Maar soms wil je niet dat uitzonderingen het programma volledig stoppen. Misschien wil je iets speciaals doen wanneer een uitzondering optreedt. Dit wordt gedaan in een *try/except* blok.

Hier is een triviaal voorbeeld: Stel dat je over een lijst itereren. Je moet over 20 nummers itereren, maar de lijst is gemaakt van gebruikersinvoer en heeft misschien niet 20 nummers erin. Nadat je het einde van de lijst hebt bereikt, wil je gewoon dat de rest van de nummers als een 0 worden geïnterpreteerd. Hier is hoe je dat zou kunnen doen:

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

Dat was niet al te moeilijk! Je kunt dat doen met elke uitzondering. Voor meer details over het afhandelen van uitzonderingen, kijk dan niet verder dan de [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Oefening
--------

Behandel alle uitzonderingen! Denk terug aan de vorige lessen om de achternaam van de acteur te retourneren.