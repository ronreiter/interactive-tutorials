Python utilizza la logica booleana per valutare le condizioni. I valori booleani True e False vengono restituiti quando un'espressione viene confrontata o valutata. Ad esempio:

x = 2
print(x == 2) # stampa True
print(x == 3) # stampa False
print(x < 3) # stampa True

Notare che l'assegnazione delle variabili viene effettuata utilizzando un singolo operatore di uguale "=", mentre il confronto tra due variabili viene effettuato utilizzando l'operatore di doppio uguale "==". L'operatore "diverso da" viene indicato con "!=".

### Operatori booleani

Gli operatori booleani "and" e "or" permettono di costruire espressioni booleane complesse, ad esempio:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Il tuo nome è John e hai anche 23 anni.")

    if name == "John" or name == "Rick":
        print("Il tuo nome è o John o Rick.")

### L'operatore "in"

L'operatore "in" può essere utilizzato per verificare se un oggetto specificato esiste all'interno di un contenitore di oggetti iterabile, come una lista:

    name = "John"
    if name in ["John", "Rick"]:
        print("Il tuo nome è o John o Rick.")

Python utilizza l'indentazione per definire i blocchi di codice, invece delle parentesi. L'indentazione standard di Python è di 4 spazi, anche se le tabulazioni e altre dimensioni degli spazi funzioneranno, purché siano coerenti. Notare che i blocchi di codice non necessitano di alcuna terminazione.

Ecco un esempio di utilizzo dell'istruzione "if" di Python utilizzando blocchi di codice:

    statement = False
    another_statement = True
    if statement is True:
        # eseguire qualcosa
        pass
    elif another_statement is True: # altrimenti se
        # eseguire qualcos'altro
        pass
    else:
        # eseguire un'altra cosa
        pass

Ad esempio:

    x = 2
    if x == 2:
        print("x è uguale a due!")
    else:
        print("x non è uguale a due.")

Un'istruzione viene valutata come vera se uno dei seguenti casi è corretto:
1. La variabile booleana "True" viene fornita o calcolata utilizzando un'espressione, come un confronto aritmetico.
2. Viene passato un oggetto che non è considerato "vuoto".

Ecco alcuni esempi di oggetti che sono considerati vuoti:
1. Una stringa vuota: ""
2. Una lista vuota: []
3. Il numero zero: 0
4. La variabile booleana false: False

### L'operatore 'is'

A differenza dell'operatore di doppio uguale "==", l'operatore "is" non confronta i valori delle variabili, ma le istanze stesse. Ad esempio:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Stampa True
    print(x is y) # Stampa False

### L'operatore "not"

Utilizzando "not" prima di un'espressione booleana la inverte:

    print(not False) # Stampa True
    print((not False) == (False)) # Stampa False

Exercise
--------

Modifica le variabili nella prima sezione, in modo che ciascuna istruzione if sia risolta come True.