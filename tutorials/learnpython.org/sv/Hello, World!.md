Python är ett mycket enkelt språk med en väldigt enkel syntax. Det uppmuntrar programmerare att koda utan mallkod (förberedd kod). Den enklaste direktiven i Python är "print"-direktiven - det skriver helt enkelt ut en rad (och inkluderar också en ny rad, till skillnad från i C).

Det finns två stora versioner av Python, Python 2 och Python 3. Python 2 och 3 är ganska olika. Denna handledning använder Python 3, eftersom det är mer semantiskt korrekt och stöder nyare funktioner.

Till exempel, en skillnad mellan Python 2 och 3 är `print`-uttrycket. I Python 2 är "print"-uttrycket inte en funktion, och därför anropas det utan parenteser. Men i Python 3 är det en funktion, och måste anropas med parenteser.

För att skriva ut en sträng i Python 3, skriv bara:

    print("This line will be printed.")

### Indentering

Python använder indentering för block, istället för måsvingar. Både tabbar och mellanslag stöds, men standardindentering kräver att standard Python-kod använder fyra mellanslag. Till exempel:

    x = 1
    if x == 1:
        # indenterad med fyra mellanslag
        print("x is 1.")

Övning
--------

Använd funktionen "print" för att skriva ut raden "Hello, World!".