Questa sezione spiega come utilizzare gli operatori di base in Python.

### Arithmetic Operators       

Come in qualsiasi altro linguaggio di programmazione, gli operatori di addizione, sottrazione, moltiplicazione e divisione possono essere usati con i numeri.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Prova a prevedere quale sarà la risposta. Python segue l'ordine delle operazioni?

Un altro operatore disponibile è l'operatore modulo (%) che restituisce il resto intero della divisione. dividendo % divisore = resto.

    remainder = 11 % 3
    print(remainder)

L'uso di due simboli di moltiplicazione crea una relazione di potenza.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python supporta la concatenazione di stringhe usando l'operatore di addizione:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python supporta anche la moltiplicazione di stringhe per formare una stringa con una sequenza ripetitiva:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Le liste possono essere unite con gli operatori di addizione:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Così come con le stringhe, Python supporta la creazione di nuove liste con una sequenza ripetitiva utilizzando l'operatore di moltiplicazione:

    print([1,2,3] * 3)

Esercizio
--------

L'obiettivo di questo esercizio è creare due liste chiamate `x_list` e `y_list`, che contengano 10 istanze delle variabili `x` e `y`, rispettivamente. Inoltre, è richiesto di creare una lista chiamata `big_list`, che contenga le variabili `x` e `y` 10 volte ciascuna, concatenando le due liste che hai creato.