# Normalmente definiamo una funzione utilizzando la parola chiave def da qualche parte nel codice e la richiamiamo ogni volta che abbiamo bisogno di utilizzarla.

    def somma(a,b):
        return a + b

    a = 1
    b = 2
    c = somma(a,b)
    print(c)

Ora, invece di definire la funzione da qualche parte e richiamarla, possiamo utilizzare le funzioni lambda di python, che sono funzioni inline definite nello stesso posto in cui le utilizziamo. Quindi non abbiamo bisogno di dichiarare una funzione altrove e di rivedere il codice solo per un uso singolo.

Non hanno bisogno di avere un nome, quindi vengono chiamate anche funzioni anonime. Definiamo una funzione lambda usando la parola chiave lambda.

    tuo_nome_funzione = lambda inputs : output

Quindi l'esempio di somma precedente utilizzando la funzione lambda sarebbe,

    a = 1
    b = 2
    somma = lambda x,y : x + y
    c = somma(a,b)
    print(c)

Qui stiamo assegnando la funzione lambda alla variabile **somma** e, fornendo gli argomenti cioè a e b, funziona come una normale funzione.

Exercise
--------
Scrivi un programma utilizzando funzioni lambda per verificare se un numero nella lista data è dispari. Stampa "True" se il numero è dispari o "False" se non lo è per ogni elemento.