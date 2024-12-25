Der er to typer loops i Python, for og while.

### "for" loop

For loops itererer over en given sekvens. Her er et eksempel:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For loops kan iterere over en sekvens af tal ved hjælp af "range" og "xrange" funktionerne. Forskellen mellem range og xrange er, at range funktionen returnerer en ny liste med tal inden for den specificerede rækkevidde, mens xrange returnerer en iterator, som er mere effektiv. (Python 3 bruger range funktionen, som fungerer som xrange). Bemærk, at range funktionen er nul-baseret.

    # Udskriver tallene 0,1,2,3,4
    for x in range(5):
        print(x)

    # Udskriver 3,4,5
    for x in range(3, 6):
        print(x)

    # Udskriver 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loops

While loops gentager, så længe en bestemt boolesk betingelse er opfyldt. For eksempel:

    # Udskriver 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Dette er det samme som count = count + 1

### "break" og "continue" statements

**break** bruges til at afslutte et for loop eller et while loop, mens **continue** bruges til at springe det nuværende blok over og vende tilbage til "for" eller "while" udsagnet. Et par eksempler:

    # Udskriver 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Udskriver kun ulige tal - 1,3,5,7,9
    for x in range(10):
        # Kontroller, om x er lige
        if x % 2 == 0:
            continue
        print(x)

### Kan vi bruge "else" klausul for loops?

I modsætning til sprog som C,CPP.. kan vi bruge **else** for loops. Når loop betingelsen for "for" eller "while" udsagnet fejler, så udføres kode delen i "else". Hvis en **break** erklæring udføres inde i for loop, så springes "else" delen over. Bemærk, at "else" delen udføres, selvom der er en **continue** erklæring.

Her er nogle eksempler:

    # Udskriver 0,1,2,3,4 og derefter udskriver den "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Udskriver 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


Øvelse
--------

Løb igennem og udskriv alle lige tal fra numrene i listen i den samme rækkefølge, de modtages. Udskriv ikke nogle tal, der kommer efter 237 i sekvensen.