Python er fuldstændig objektorienteret og ikke "statiskt typet". Du behøver ikke erklære variabler, før du bruger dem, eller erklære deres type. Hver variabel i Python er et objekt.

Denne tutorial vil gennemgå et par grundlæggende typer af variabler.

### Tal
Python understøtter to typer tal - heltal (hele tal) og flydende kommatall (decimaler). (Det understøtter også komplekse tal, som ikke vil blive forklaret i denne tutorial).

For at definere et heltal, brug følgende syntaks:

    myint = 7
    print(myint)

For at definere et flydende kommatall, kan du bruge en af følgende notationer:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strenge

Strenge defineres enten med en enkelt anførselstegn eller et dobbelt anførselstegn.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Forskellen mellem de to er, at brug af dobbelte anførselstegn gør det nemt at inkludere apostroffer (hvorimod disse ville afslutte strengen, hvis man brugte enkelt anførselstegn)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Der er yderligere varianter af strengdefinitioner, som gør det lettere at inkludere ting som linjeskift, bagstreg og Unicode-tegn. Disse ligger uden for denne tutorials tilgang, men er dækket i [Python-dokumentationen](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Enkle operatorer kan udføres på tal og strenge:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Tildelinger kan udføres på mere end en variabel "samtidigt" på samme linje sådan:

    a, b = 3, 4
    print(a, b)

Blanding af operatorer mellem tal og strenge understøttes ikke:

    # Dette vil ikke virke!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Øvelse
--------

Målet med denne øvelse er at skabe en streng, et heltal og et flydende kommatall. Strengen skal hedde `mystring` og skal indeholde ordet "hello". Det flydende kommatall skal hedde `myfloat` og skal indeholde tallet 10.0, og heltallet skal hedde `myint` og skal indeholde tallet 20.