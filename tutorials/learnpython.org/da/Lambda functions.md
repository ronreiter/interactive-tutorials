Normalt definerer vi en funktion ved at bruge def-nøgleordet et sted i koden og kalder den, når vi har brug for at bruge den.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Nu, i stedet for at definere funktionen et sted og kalde den, kan vi bruge Pythons lambda-funktioner, som er inline-funktioner defineret samme sted, som vi bruger dem. Så vi behøver ikke erklære en funktion et sted og genbesøge koden kun for en enkelt gangs brug.

De behøver ikke at have et navn, så de kaldes også anonyme funktioner. Vi definerer en lambda-funktion ved at bruge nøgleordet lambda.

    your_function_name = lambda inputs : output

Så det ovenstående sum-eksempel ved hjælp af lambda-funktion ville være,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Her tildeler vi lambda-funktionen til variablen **sum**, og når vi giver argumenterne, dvs. a og b, fungerer den som en normal funktion.



Exercise
--------
Skriv et program ved hjælp af lambda-funktioner til at kontrollere, om et tal i den givne liste er ulige. Udskriv "True", hvis tallet er ulige, eller "False", hvis ikke for hvert element.