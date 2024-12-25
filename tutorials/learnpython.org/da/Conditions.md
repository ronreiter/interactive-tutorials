Python bruger boolesk logik til at evaluere betingelser. De booleske værdier True og False returneres, når et udtryk sammenlignes eller evalueres. For eksempel:

    x = 2
    print(x == 2) # udskriver True
    print(x == 3) # udskriver False
    print(x < 3) # udskriver True

Bemærk, at variabeltildeling sker med en enkelt lighedstegn "=", mens sammenligning mellem to variabler sker med dobbelt lighedstegn "==". "Ikke lig med" operatoren markeres som "!=".

### Booleske operatorer

De booleske operatorer "and" og "or" tillader opbygning af komplekse booleske udtryk, for eksempel:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### "in" operatoren

"in" operatoren kan bruges til at tjekke, om et specificeret objekt eksisterer indenfor en iterabel objektcontainer, såsom en liste:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python bruger indrykning til at definere kodeblokke i stedet for klammer. Standardindrykningen i Python er 4 mellemrum, selvom tabulatorer og enhver anden mellemrumsstørrelse vil fungere, så længe det er konsekvent. Bemærk, at kodeblokke ikke behøver nogen afslutning.

Her er et eksempel på brug af Pythons "if"-udsagn ved hjælp af kodeblokke:

    statement = False
    another_statement = True
    if statement is True:
        # gør noget
        pass
    elif another_statement is True: # else if
        # gør noget andet
        pass
    else:
        # gør en anden ting
        pass

For eksempel:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

Et udsagn evalueres som true, hvis et af følgende er korrekt:
1. Den boolske variabel "True" er givet eller beregnet ved hjælp af et udtryk, såsom en aritmetisk sammenligning.
2. Et objekt, som ikke betragtes som "tomt", er overgivet.

Her er nogle eksempler på objekter, der betragtes som tomme:
1. En tom streng: ""
2. En tom liste: []
3. Tallet nul: 0
4. Den boolske variabel false: False

### 'is'-operatoren

I modsætning til den dobbelte lighedstegn "==", matcher "is"-operatoren ikke værdierne af variablerne, men instanserne selv. For eksempel:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Udskriver True
    print(x is y) # Udskriver False

### "not" operatoren

Brug af "not" før et boolesk udtryk inverterer det:

    print(not False) # Udskriver True
    print((not False) == (False)) # Udskriver False

Øvelse
--------

Ændr variablerne i første sektion, så hver "if"-udsagn evalueres som True.