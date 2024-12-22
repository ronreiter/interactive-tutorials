Python è completamente orientato agli oggetti e non "tipizzato staticamente". Non è necessario dichiarare le variabili prima di usarle o dichiararne il tipo. Ogni variabile in Python è un oggetto.

Questo tutorial coprirà alcuni tipi di base di variabili.

### Numbers
Python supporta due tipi di numeri - interi (numeri interi) e numeri in virgola mobile (decimali). (Supporta anche numeri complessi, che non verranno spiegati in questo tutorial).

Per definire un numero intero, usa la seguente sintassi:

    myint = 7
    print(myint)

Per definire un numero in virgola mobile, puoi utilizzare una delle seguenti notazioni:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Le stringhe sono definite con apice singolo o doppi apici.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

La differenza tra i due è che usando i doppi apici è più facile includere apostrofi (mentre questi terminerebbero la stringa se si usassero gli apici singoli)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Ci sono ulteriori variazioni sulla definizione delle stringhe che facilitano l'inclusione di elementi come ritorni a capo, backslash e caratteri Unicode. Questi argomenti vanno oltre lo scopo di questo tutorial, ma sono trattati nella [documentazione Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Operatori semplici possono essere eseguiti su numeri e stringhe:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Le assegnazioni possono essere fatte su più di una variabile "simultaneamente" sulla stessa riga, come questo:

    a, b = 3, 4
    print(a, b)

La mescolanza degli operatori tra numeri e stringhe non è supportata:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

L'obiettivo di questo esercizio è creare una stringa, un numero intero e un numero in virgola mobile. La stringa dovrebbe essere chiamata `mystring` e dovrebbe contenere la parola "hello". Il numero in virgola mobile dovrebbe essere chiamato `myfloat` e dovrebbe contenere il numero 10.0, e il numero intero dovrebbe essere chiamato `myint` e dovrebbe contenere il numero 20.