Python är helt objektorienterat och inte "statiskt typat". Du behöver inte deklarera variabler innan du använder dem eller ange deras typ. Varje variabel i Python är ett objekt.

Denna handledning kommer att gå igenom några grundläggande typer av variabler.

### Numbers
Python stöder två typer av tal - heltal (hela nummer) och flyttal (decimaler). (Den stöder också komplexa tal, som inte kommer att förklaras i denna handledning).

För att definiera ett heltal, använd följande syntax:

    myint = 7
    print(myint)

För att definiera ett flyttal, kan du använda en av följande notationer:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Strängar definieras antingen med ett enkelt citattecken eller ett dubbelt citattecken.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Skillnaden mellan de två är att använda dubbla citattecken gör det lätt att inkludera apostrofer (medan dessa skulle avsluta strängen om man använder enkla citattecken).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Det finns ytterligare variationer på att definiera strängar som gör det enklare att inkludera saker som vagnreturer, bakåtsnedstreck och Unicode-tecken. Dessa ligger utanför ramen för denna handledning, men behandlas i [Python-dokumentationen](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Enkla operatorer kan utföras på tal och strängar:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Tilldelningar kan göras på mer än en variabel "samtidigt" på samma rad så här

    a, b = 3, 4
    print(a, b)

Att blanda operatorer mellan tal och strängar stöds inte:

    # Detta kommer inte att fungera!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

Målet med denna övning är att skapa en sträng, ett heltal och ett flyttal. Strängen ska heta `mystring` och ska innehålla ordet "hello". Flyttalet ska heta `myfloat` och ska innehålla talet 10.0, och heltalet ska heta `myint` och ska innehålla talet 20.