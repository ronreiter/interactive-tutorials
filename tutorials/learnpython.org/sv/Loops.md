Det finns två typer av loopar i Python, för och medan.

### "for" loopen

For-loopar itererar över en given sekvens. Här är ett exempel:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For-loopar kan iterera över en sekvens av siffror med hjälp av funktionerna "range" och "xrange". Skillnaden mellan range och xrange är att range-funktionen returnerar en ny lista med siffror inom det specificerade intervallet, medan xrange returnerar en iterator, vilket är mer effektivt. (Python 3 använder range-funktionen som beter sig som xrange). Observera att range-funktionen är nollbaserad.

    # Skriver ut siffrorna 0,1,2,3,4
    for x in range(5):
        print(x)

    # Skriver ut 3,4,5
    for x in range(3, 6):
        print(x)

    # Skriver ut 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loopar

While-loopar upprepas så länge ett visst boolskt villkor är uppfyllt. Till exempel:

    # Skriver ut 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Detta är samma som count = count + 1

### "break" och "continue" satser

**break** används för att avsluta en for-loop eller en while-loop, medan **continue** används för att hoppa över det nuvarande blocket och återgå till "for" eller "while" satsen. Några exempel:

    # Skriver ut 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Skriver ut endast udda siffror - 1,3,5,7,9
    for x in range(10):
        # Kontrollera om x är jämnt
        if x % 2 == 0:
            continue
        print(x)

### Kan vi använda "else" klausul för loopar?

Till skillnad från språk som C, CPP.. kan vi använda **else** för loopar. När loopvillkoret för "for" eller "while" satsen misslyckas, så körs koden i "else" delen. Om en **break** sats utförs inuti for-loopen, så hoppas "else" delen över.
Observera att "else" delen körs även om det finns en **continue** sats.

Här är några exempel:

    # Skriver ut 0,1,2,3,4 och sedan skriver den "count value reached 5"

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


Övning
--------

Loopa igenom och skriv ut alla jämna siffror från siffror i listan i samma ordning som de tas emot. Skriv inte ut några siffror som kommer efter 237 i sekvensen.