Python is volledig objectgeoriënteerd en niet "statisch getypt". Je hoeft geen variabelen te declareren voordat je ze gebruikt, of hun type te declareren. Elke variabele in Python is een object.

Deze tutorial behandelt enkele basistypen variabelen.

### Numbers
Python ondersteunt twee soorten getallen - gehele getallen (hele getallen) en zwevende komma getallen (decimale getallen). (Het ondersteunt ook complexe getallen, die echter niet in deze tutorial worden uitgelegd).

Om een geheel getal te definiëren, gebruik je de volgende syntaxis:

    myint = 7
    print(myint)

Om een zwevend komma getal te definiëren, kun je een van de volgende notaties gebruiken:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Strings worden gedefinieerd met een enkele aanhalingsteken of een dubbele aanhalingstekens.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Het verschil tussen de twee is dat het gebruik van dubbele aanhalingstekens het gemakkelijk maakt om apostroffen op te nemen (terwijl deze de string zouden beëindigen als je enkele aanhalingstekens zou gebruiken).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Er zijn aanvullende variaties op het definiëren van strings die het gemakkelijker maken om zaken als regeleinden, backslashes en Unicode-tekens op te nemen. Deze vallen buiten het bestek van deze tutorial, maar worden behandeld in de [Python-documentatie](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Eenvoudige operators kunnen worden uitgevoerd op getallen en strings:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Toewijzingen kunnen op meer dan één variabele "tegelijkertijd" op dezelfde regel worden gedaan als volgt

    a, b = 3, 4
    print(a, b)

Het vermengen van operators tussen getallen en strings wordt niet ondersteund:

    # Dit zal niet werken!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

Het doel van deze oefening is om een string, een geheel getal en een zwevend komma getal te maken. De string moet `mystring` heten en moet het woord "hello" bevatten. Het zwevend komma getal moet `myfloat` heten en moet het getal 10.0 bevatten, en het gehele getal moet `myint` heten en moet het getal 20 bevatten.