Un dizionario è un tipo di dato simile agli array, ma funziona con chiavi e valori invece che con indici. Ogni valore memorizzato in un dizionario può essere accesso utilizzando una chiave, che può essere qualsiasi tipo di oggetto (una stringa, un numero, una lista, ecc.) invece di utilizzare il suo indice per indirizzarlo.

Ad esempio, un database di numeri di telefono potrebbe essere memorizzato utilizzando un dizionario come questo:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

In alternativa, un dizionario può essere inizializzato con gli stessi valori nella seguente notazione:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterare sui dizionari

I dizionari possono essere iterati, proprio come una lista. Tuttavia, un dizionario, a differenza di una lista, non mantiene l'ordine dei valori memorizzati al suo interno. Per iterare su coppie chiave-valore, utilizzare la seguente sintassi:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Rimuovere un valore

Per rimuovere un indice specificato, utilizzare una delle seguenti notazioni:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

oppure:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Esercizio
--------

Aggiungi "Jake" alla rubrica con il numero di telefono 938273443, e rimuovi Jill dalla rubrica.