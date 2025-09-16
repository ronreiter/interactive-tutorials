Python er fullstendig objektorientert, og ikke "statisk typet". Du trenger ikke å erklære variabler før du bruker dem, eller erklære deres type. Hver variabel i Python er et objekt.

Denne veiledningen vil dekke noen grunnleggende typer variabler.

### Tall
Python støtter to typer tall - heltall (hele tall) og flyttall (desimaltall). (Det støtter også komplekse tall, som ikke vil bli forklart i denne veiledningen).

For å definere et heltall, bruk følgende syntaks:

    myint = 7
    print(myint)

For å definere en flyttall, kan du bruke en av følgende notasjoner:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strenger

Strenger kan defineres enten med et enkelt anførselstegn eller et dobbelt anførselstegn.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Forskjellen mellom de to er at ved å bruke dobbelt anførselstegn er det enkelt å inkludere apostrofer (mens disse ville avslutte strengen hvis du brukte enkelt anførselstegn)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Det er flere varianter av hvordan man definerer strenger som gjør det enklere å inkludere ting som linjeskift, bakstreker og Unicode-tegn. Disse ligger utenfor omfanget av denne veiledningen, men er dekket i [Python-dokumentasjonen](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Enkle operasjoner kan utføres på tall og strenger:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Tilordninger kan gjøres på mer enn en variabel "samtidig" på samme linje slik som dette:

    a, b = 3, 4
    print(a, b)

Å blande operatører mellom tall og strenger støttes ikke:

    # Dette vil ikke fungere!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Øvelse
--------

Målet med denne øvelsen er å lage en streng, et heltall, og et flyttall. Strengen skal hete `mystring` og inneholde ordet "hello". Flyttallet skal hete `myfloat` og inneholde tallet 10.0, og heltallet skal hete `myint` og inneholde tallet 20.