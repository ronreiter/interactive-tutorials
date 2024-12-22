Generators er meget nemme at implementere, men lidt svære at forstå.

Generatorer bruges til at skabe iteratorer, men med en anden tilgang. Generatorer er simple funktioner, som returnerer en iterabel mængde af elementer, ét ad gangen, på en speciel måde.

Når en iteration over en mængde af elementer begynder ved hjælp af for-sætningen, bliver generatoren kørt. Når generatorens funktioner når en "yield"-sætning, returnerer generatoren sin udførelse til for-loopet og returnerer en ny værdi fra mængden. Generator-funktionen kan generere så mange værdier (muligvis uendeligt mange), som den ønsker, ved at yield hver enkelt i sin tur.

Her er et simpelt eksempel på en generator-funktion, som returnerer 7 tilfældige heltal:

    import random
    
    def lottery():
        # returnerer 6 tal mellem 1 og 40
        for i in range(6):
            yield random.randint(1, 40)

        # returnerer et 7. tal mellem 1 og 15
        yield random.randint(1, 15)

    for random_number in lottery():
           print("Og det næste tal er... %d!" % (random_number))

Denne funktion bestemmer selv, hvordan den vil generere de tilfældige tal, og udfører yield-udsagnene ét ad gangen, mens den pauser imellem for at overgive udførelsen tilbage til det primære for-loop.

Øvelse
--------

Skriv en generator-funktion, som returnerer Fibonacci-sekvensen. De beregnes ved hjælp af følgende formel: De første to tal i sekvensen er altid lig med 1, og hvert efterfølgende tal, der returneres, er summen af de to sidste tal.
Tip: Kan du bruge kun to variabler i generator-funktionen? Husk, at tildelinger kan udføres samtidigt. Koden

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

vil samtidig skifte værdierne af a og b.