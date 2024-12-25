Prendere input e mostrare output nel modo richiesto svolge un ruolo importante nella programmazione interattiva. Quindi concentriamoci sugli input e output di vari tipi di dati.

###raw_input()
questo è usato per prendere input finché non si raggiunge la fine della riga. Nota che non dovrebbero esserci spazi. L'input termina con un carattere di nuova riga e se ci sono spazi nella riga di input questo risulta in un errore

    # Stampa l'input ricevuto da stdin
    astring=raw_input()# inserisci hello
    print raw_input()

dopo aver preso l'input possiamo convertirlo nel nostro tipo di dato richiesto usando funzioni come int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
questo è usato specialmente per inserire interi. Il vantaggio di input() rispetto a raw_input() può essere chiarito con il seguente esempio

    #inserisci 2*2
    a=input()
    b=raw_input() #nota che int(raw_input()) risulta in errore
    print a #stampa 4
    print b #stampa 2*2

###come prendere due o più tipi di dati come input da una singola linea separati da spazi?
Qui facciamo uso delle funzioni split() e map()

    #inserisci due interi nella prima riga e più di due interi nella terza riga
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # stampa i primi due interi dalla prima riga e la somma degli interi della seconda riga

###Formattazione dell'output
Potresti aver già notato che l'istruzione print inserisce automaticamente una nuova riga. L'uso della virgola come nel codice sopra stampa i valori in una singola riga separati da uno spazio. Il modulo sys fornisce varie funzioni per la formattazione dell'output ma qui impariamo come usare la conoscenza di base della formattazione per ottenere l'output nel modo richiesto. Vediamo alcuni esempi per imparare la formattazione dell'output

    a = 5
    b = 0.63
    c = "hello"
    print "a è: %d, b è %0.4f, c è %s" % (a,b,c)

L'output deve essere autoesplicativo.

Esercizio
--------

Scrivi un programma che chieda all'utente di inserire il proprio nome, età e paese. Il programma deve quindi stampare un messaggio che include queste informazioni in una frase. Il programma deve includere:

1. Prendere un nome come input usando `raw_input()`.
2. Prendere un'età come input usando `input()` e convertirla in un intero.
3. Prendere il nome di un paese come input usando `raw_input()`.
4. Formattare l'output per visualizzare una frase che includa il nome, l'età e il paese.

Il programma deve dimostrare la gestione degli input e la formattazione delle stringhe in Python.