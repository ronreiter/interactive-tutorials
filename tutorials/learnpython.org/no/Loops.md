Det finnes to typer løkker i Python, for og while.

### "for"-løkke

For-løkker itererer over en gitt sekvens. Her er et eksempel:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For-løkker kan iterere over en sekvens av tall ved å bruke "range" og "xrange"-funksjonene. Forskjellen mellom range og xrange er at range-funksjonen returnerer en ny liste med tall i det spesifiserte området, mens xrange returnerer en iterator, som er mer effektiv. (Python 3 bruker range-funksjonen, som fungerer som xrange). Merk at range-funksjonen er nullbasert.

    # Skriver ut tallene 0,1,2,3,4
    for x in range(5):
        print(x)

    # Skriver ut 3,4,5
    for x in range(3, 6):
        print(x)

    # Skriver ut 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while"-løkker

While-løkker gjentar så lenge en bestemt boolsk betingelse er oppfylt. For eksempel:

    # Skriver ut 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Dette er det samme som count = count + 1

### "break" og "continue" utsagn

**break** brukes til å avslutte en for- eller while-løkke, mens **continue** brukes til å hoppe over den gjeldende blokken, og gå tilbake til "for"- eller "while"-utsagnet. Noen eksempler:

    # Skriver ut 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Skriver ut kun oddetall - 1,3,5,7,9
    for x in range(10):
        # Sjekk om x er et partall
        if x % 2 == 0:
            continue
        print(x)

### Kan vi bruke "else" med løkker?

I motsetning til språk som C, CPP.. kan vi bruke **else** med løkker i Python. Når tilstandene for "for"- eller "while"-utsagnet ikke lenger er oppfylt, utføres koden i "else". Hvis en **break** uttalelse utføres inne i for-løkken, blir "else"-delen hoppet over. 
Merk at "else"-delen utføres selv om det er en **continue** uttalelse.

Her er noen eksempler:

    # Skriver ut 0,1,2,3,4 og deretter "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Skriver ut 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


Øvelse
--------

Gå gjennom og skriv ut alle partall fra listen med tall i samme rekkefølge som de mottas. Ikke skriv ut noen tall som kommer etter 237 i sekvensen.