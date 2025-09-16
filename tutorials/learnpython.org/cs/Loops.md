Existují dva typy cyklů v Pythonu: for a while.

### Cyklus "for"

Cyklus for iteruje přes danou sekvenci. Zde je příklad:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Cyklus for může iterovat přes sekvenci čísel pomocí funkcí "range" a "xrange". Rozdíl mezi range a xrange je, že funkce range vrací nový seznam s čísly v daném rozsahu, zatímco xrange vrátí iterátor, což je efektivnější. (Python 3 používá funkci range, která se chová jako xrange). Všimněte si, že funkce range je založena na nule.

    # Vytiskne čísla 0,1,2,3,4
    for x in range(5):
        print(x)

    # Vytiskne 3,4,5
    for x in range(3, 6):
        print(x)

    # Vytiskne 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Cyklus "while"

Cyklus while se opakuje, dokud je splněna určitá logická podmínka. Například:

    # Vytiskne 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Toto je stejné jako count = count + 1

### Příkazy "break" a "continue"

**break** se používá k ukončení cyklu for nebo while, zatímco **continue** se používá ke skoku na začátek aktuálního bloku a k návratu k příkazu "for" nebo "while". Několik příkladů:

    # Vytiskne 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Vytiskne pouze lichá čísla - 1,3,5,7,9
    for x in range(10):
        # Zjištění, zda je x sudé
        if x % 2 == 0:
            continue
        print(x)

### Můžeme použít "else" klauzuli pro cykly?

Na rozdíl od jazyků jako C, CPP.. můžeme použít **else** pro cykly. Když podmínka cyklu "for" nebo "while" selže, pak se provede kód v části "else". Pokud je uvnitř cyklu for vykonán příkaz **break**, část "else" je přeskočena. Všimněte si, že část "else" se provede i v případě, že je zde příkaz **continue**.

Zde je několik příkladů:

    # Vytiskne 0,1,2,3,4 a potom vytiskne "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Vytiskne 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("toto není vytištěno, protože cyklus for je ukončen kvůli break a ne kvůli selhání podmínky")

Cvičení
--------

Projděte a vytiskněte všechna sudá čísla ze seznamu čísel ve stejném pořadí, v jakém byla přijata. Nevytištěte žádná čísla, která následují po 237 v sekvenci.