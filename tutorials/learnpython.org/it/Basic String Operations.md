I seguenti sono stringhe di testo. Possono essere definite come qualsiasi cosa tra virgolette:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Come puoi vedere, la prima cosa che hai imparato è stata stampare una semplice frase. Questa frase è stata memorizzata da Python come una stringa. Tuttavia, invece di stampare immediatamente le stringhe, esploreremo le varie cose che puoi farci.
Puoi anche usare virgolette singole per assegnare una stringa. Tuttavia, avrai problemi se il valore da assegnare contiene esse stesse virgolette singole. Ad esempio, per assegnare la stringa in queste parentesi (le virgolette singole sono ' '), devi usare solo le virgolette doppie in questo modo

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Questo stampa 12, perché "Hello world!" è lungo 12 caratteri, inclusi punteggiatura e spazi.

    astring = "Hello world!"
    print(astring.index("o"))

Questo stampa 4, perché la posizione della prima occorrenza della lettera "o" è 4 caratteri lontano dal primo carattere. Nota come ci sono effettivamente due "o" nella frase - questo metodo riconosce solo la prima.

Ma perché non ha stampato 5? Non è "o" il quinto carattere nella stringa? Per semplificare le cose, Python (e la maggior parte degli altri linguaggi di programmazione) inizia a contare da 0 invece che da 1. Quindi l'indice di "o" è 4.

    astring = "Hello world!"
    print(astring.count("l"))

Per quelli di voi che usano font strani, quello è una "L" minuscola, non un numero uno. Questo conta il numero di "l" nella stringa. Pertanto, dovrebbe stampare 3.

    astring = "Hello world!"
    print(astring[3:7])

Questo stampa una porzione di stringa, iniziando dall'indice 3 e terminando all'indice 6. Ma perché 6 e non 7? Ancora una volta, la maggior parte dei linguaggi di programmazione fa questo - rende più facile fare i calcoli all'interno di quelle parentesi.

Se hai solo un numero nelle parentesi, ti darà il singolo carattere a quell'indice. Se ometti il primo numero ma mantieni i due punti, ti darà una porzione dall'inizio fino al numero che hai lasciato. Se ometti il secondo numero, ti darà una porzione dal primo numero fino alla fine.

Puoi persino mettere numeri negativi all'interno delle parentesi. Sono un modo semplice per partire dalla fine della stringa invece che dall'inizio. In questo modo, -3 significa "3° carattere dalla fine".

    astring = "Hello world!"
    print(astring[3:7:2])

Questo stampa i caratteri della stringa da 3 a 7 saltando un carattere. Questa è una sintassi di porzione estesa. La forma generale è [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Nota che entrambi producono lo stesso output

Non esiste una funzione come strrev in C per invertire una stringa. Ma con il tipo di sintassi di porzione sopra menzionato puoi facilmente invertire una stringa in questo modo

    astring = "Hello world!"
    print(astring[::-1])

Questa

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Queste creano una nuova stringa con tutte le lettere convertite in maiuscole e minuscole, rispettivamente.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Questo viene utilizzato per determinare se la stringa inizia con qualcosa o termina con qualcosa, rispettivamente. La prima stamperà True, poiché la stringa inizia con "Hello". La seconda stamperà False, poiché la stringa certamente non termina con "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Questo divide la stringa in una serie di stringhe raggruppate insieme in una lista. Poiché questo esempio si divide a uno spazio, il primo elemento nella lista sarà "Hello" e il secondo sarà "world!".

Exercise
--------

Cerca di correggere il codice per stampare le informazioni corrette modificando la stringa.