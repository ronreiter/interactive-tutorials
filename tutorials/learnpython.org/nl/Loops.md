Er zijn twee soorten lussen in Python: for en while.

### De "for" lus

For-lussen herhalen zich over een gegeven reeks. Hier is een voorbeeld:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For-lussen kunnen herhalen over een reeks getallen met behulp van de functies "range" en "xrange". Het verschil tussen range en xrange is dat de range functie een nieuwe lijst retourneert met getallen van dat gespecificeerde bereik, terwijl xrange een iterator retourneert, wat efficiënter is. (Python 3 gebruikt de range functie, die zich gedraagt als xrange). Let op dat de range functie nul-gebaseerd is.

    # Drukt de getallen 0,1,2,3,4 af
    for x in range(5):
        print(x)

    # Drukt 3,4,5 af
    for x in range(3, 6):
        print(x)

    # Drukt 3,5,7 af
    for x in range(3, 8, 2):
        print(x)

### "while" lussen

While-lussen herhalen zolang aan een bepaalde booleaanse voorwaarde wordt voldaan. Bijvoorbeeld:

    # Drukt 0,1,2,3,4 af

    count = 0
    while count < 5:
        print(count)
        count += 1  # Dit is hetzelfde als count = count + 1

### "break" en "continue" instructies

**break** wordt gebruikt om een for-lus of een while-lus te beëindigen, terwijl **continue** wordt gebruikt om het huidige blok over te slaan en terug te keren naar de "for" of "while" instructie. Een paar voorbeelden:

    # Drukt 0,1,2,3,4 af

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Drukt alleen oneven getallen af - 1,3,5,7,9
    for x in range(10):
        # Controleer of x even is
        if x % 2 == 0:
            continue
        print(x)

### Kunnen we een "else"-clausule gebruiken voor lussen?

In tegenstelling tot talen zoals C, CPP.. kunnen we **else** gebruiken voor lussen. Wanneer de lusvoorwaarde van een "for" of "while" instructie faalt, wordt het codegedeelte in "else" uitgevoerd. Als een **break** instructie binnen de for-lus wordt uitgevoerd, wordt het "else" gedeelte overgeslagen. Let op dat het "else" gedeelte wordt uitgevoerd, zelfs als er een **continue** instructie is.

Hier zijn een paar voorbeelden:

    # Drukt 0,1,2,3,4 af en vervolgens "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Drukt 1,2,3,4 af
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("dit wordt niet afgedrukt omdat de for-lus is beëindigd vanwege break maar niet door een mislukking in de voorwaarde")

Oefening
--------

Loop door en druk alle even getallen af uit de getallenlijst in dezelfde volgorde waarin ze worden ontvangen. Druk geen getallen af die na 237 in de reeks komen.