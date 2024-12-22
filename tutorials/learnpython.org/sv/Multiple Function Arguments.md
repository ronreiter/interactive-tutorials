Varje funktion i Python tar emot ett fördefinierat antal argument, om de deklareras normalt, så här:

Det är möjligt att deklarera funktioner som tar emot ett variabelt antal argument, med följande syntax:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

Variabeln "therest" är en lista av variabler, som tar emot alla argument som ges till "foo"-funktionen efter de första 3 argumenten. Så att kalla `foo(1, 2, 3, 4, 5)` kommer att skriva ut:

Det är också möjligt att skicka funktionsargument genom nyckelord, så att ordningen av argumenten inte spelar någon roll, med följande syntax. Följande kod ger följande output:

```The sum is: 6
Result: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

Funktionen "bar" tar emot 3 argument. Om ett ytterligare "action"-argument tas emot, och det instruerar om att summera numren, då skrivs summan ut. Alternativt vet funktionen också att den måste returnera det första argumentet, om värdet på "number"-parametern, som skickas till funktionen, är lika med "first".

Övning
--------

Fyll i `foo` och `bar` funktionerna så att de kan ta emot ett variabelt antal argument (3 eller fler) `foo`-funktionen måste returnera antalet extra argument som tas emot. `bar` måste returnera `True` om argumentet med nyckelordet `magicnumber` är värt 7, och `False` annars.