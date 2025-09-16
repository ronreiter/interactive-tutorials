Ci sono due tipi di cicli in Python, for e while.

### Il ciclo "for"

I cicli for iterano su una determinata sequenza. Ecco un esempio:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

I cicli for possono iterare su una sequenza di numeri utilizzando le funzioni "range" e "xrange". La differenza tra range e xrange è che la funzione range restituisce una nuova lista con i numeri di tale intervallo specificato, mentre xrange restituisce un iteratore, che è più efficiente. (Python 3 utilizza la funzione range, che si comporta come xrange). Nota che la funzione range è basata su zero.

    # Stampa i numeri 0,1,2,3,4
    for x in range(5):
        print(x)

    # Stampa 3,4,5
    for x in range(3, 6):
        print(x)

    # Stampa 3,5,7
    for x in range(3, 8, 2):
        print(x)

### I cicli "while"

I cicli while si ripetono fintanto che una certa condizione booleana è soddisfatta. Per esempio:

    # Stampa 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Questo equivale a count = count + 1

### I costrutti "break" e "continue"

**break** viene utilizzato per uscire da un ciclo for o while, mentre **continue** viene utilizzato per saltare il blocco corrente e tornare all'istruzione "for" o "while". Alcuni esempi:

    # Stampa 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Stampa solo i numeri dispari - 1,3,5,7,9
    for x in range(10):
        # Controlla se x è pari
        if x % 2 == 0:
            continue
        print(x)

### Possiamo usare la clausola "else" nei cicli?

Diversamente da linguaggi come C, CPP, ecc., possiamo usare **else** nei cicli. Quando la condizione del ciclo dell'istruzione "for" o "while" fallisce, allora viene eseguita la parte di codice in "else". Se un'istruzione **break** viene eseguita all'interno del ciclo for, allora la parte "else" viene saltata. Nota che la parte "else" viene eseguita anche se c'è un'istruzione **continue**.

Ecco alcuni esempi:

    # Stampa 0,1,2,3,4 e poi stampa "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Stampa 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

Esercizio
--------

Scorri e stampa tutti i numeri pari dalla lista dei numeri nello stesso ordine in cui sono ricevuti. Non stampare nessun numero che viene dopo 237 nella sequenza.