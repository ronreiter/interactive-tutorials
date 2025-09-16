Python is een zeer eenvoudige taal en heeft een zeer overzichtelijke syntax.
Het moedigt programmeurs aan om te programmeren zonder boilerplate (vooraf geschreven) code.
De eenvoudigste opdracht in Python is de "print" opdracht -
deze print eenvoudigweg een regel (en voegt ook een nieuwe regel toe, in tegenstelling tot in C).

Er zijn twee belangrijke Python-versies, Python 2 en Python 3. Python 2 en 3 zijn vrij verschillend.
Deze tutorial gebruikt Python 3, omdat het meer semantisch correct is en nieuwere functies ondersteunt.

Een voorbeeld van een verschil tussen Python 2 en 3 is de `print` statement.
In Python 2 is de "print" opdracht geen functie, en wordt deze daarom aangeroepen zonder haakjes. Echter, in Python 3 is het een functie, en moet deze worden aangeroepen met haakjes.

Om een string in Python 3 te printen, schrijf je gewoon:

    print("This line will be printed.")

### Indentatie

Python gebruikt inspringing voor blokken, in plaats van accolades. Zowel tabs als spaties worden ondersteund, maar de standaard inspringing vereist dat standaard Python code vier spaties gebruikt. Bijvoorbeeld:

    x = 1
    if x == 1:
        # ingesprongen met vier spaties
        print("x is 1.")

Oefening
--------

Gebruik de "print" functie om de regel "Hello, World!" te printen.