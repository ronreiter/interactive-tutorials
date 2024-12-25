I list sono molto simili agli array. Possono contenere qualsiasi tipo di variabile e possono contenere quante variabili desideri. I list possono anche essere iterati in modo molto semplice. Ecco un esempio di come costruire un list.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Accedere a un indice che non esiste genera un'eccezione (un errore).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

In questo esercizio, dovrai aggiungere numeri e stringhe alle liste corrette utilizzando il metodo "append" del list. Devi aggiungere i numeri 1, 2 e 3 alla lista "numbers", e le parole 'hello' e 'world' alla variabile strings.

Dovrai anche riempire la variabile second_name con il secondo nome nella lista names, utilizzando l'operatore delle parentesi `[]`. Nota che l'indice è basato su zero, quindi se vuoi accedere al secondo elemento nella lista, il suo indice sarà 1.