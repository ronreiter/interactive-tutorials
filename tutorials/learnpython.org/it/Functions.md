### Cosa sono le Funzioni?

Le funzioni sono un modo conveniente per dividere il codice in blocchi utili, permettendoci di ordinare il nostro codice, renderlo più leggibile, riutilizzarlo e risparmiare tempo. Le funzioni sono anche un modo fondamentale per definire interfacce affinché i programmatori possano condividere il loro codice.

### Come si scrivono le funzioni in Python?

Come abbiamo visto in tutorial precedenti, Python utilizza i blocchi.

Un blocco è un'area di codice scritta nel formato:

    block_head:
        1st block line
        2nd block line
        ...

Dove una linea di blocco è un altro codice Python (anche un altro blocco), e la testa del blocco è del seguente formato:
block_keyword block_name(argument1,argument2, ...)
Le parole chiave del blocco che già conosci sono "if", "for" e "while".

Le funzioni in Python sono definite utilizzando la parola chiave del blocco "def", seguita dal nome della funzione come nome del blocco. Per esempio:

    def my_function():
        print("Hello From My Function!")


Le funzioni possono anche ricevere argomenti (variabili passate dal chiamante alla funzione). Per esempio:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Le funzioni possono restituire un valore al chiamante, utilizzando la parola chiave 'return'. Per esempio:

    def sum_two_numbers(a, b):
        return a + b

### Come si chiamano le funzioni in Python?

Semplicemente scrivi il nome della funzione seguito da (), inserendo gli argomenti richiesti tra parentesi. Per esempio, chiamiamo le funzioni scritte sopra (nell'esempio precedente):

    # Definisci le nostre 3 funzioni
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # stampa un semplice saluto
    my_function()

    # stampa - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # dopo questa linea x conterrà il valore 3!
    x = sum_two_numbers(1,2)  


Esercizio
--------

In questo esercizio utilizzerai una funzione esistente, e nel frattempo aggiungerai la tua per creare un programma completamente funzionale.

1. Aggiungi una funzione chiamata `list_benefits()` che restituisce il seguente elenco di stringhe: "Codice più organizzato", "Codice più leggibile", "Riutilizzo del codice più semplice", "Permette ai programmatori di condividere e collegare il codice insieme"

2. Aggiungi una funzione chiamata `build_sentence(info)` che riceve un singolo argomento contenente una stringa e restituisce una frase che inizia con la stringa fornita e termina con la stringa " è un beneficio delle funzioni!"

3. Esegui e osserva tutte le funzioni lavorare insieme!