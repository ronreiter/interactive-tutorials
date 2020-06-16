Tutorial
--------

Le liste sono molto simili agli array. Possono contenere qualsiasi tipo di variabile e possono avere un arbitrario numero di elementi. Inoltre, le liste possono essere iterate in modo molto semplice. Ecco un esempio di come costruire una lista:

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print x

Se si tenta di accedere ad un indice che non esiste Python genererà un'eccezione (un errore).

    mylist = [1,2,3]  # questa lista ha 3 elementi e quindi
    print mylist[10]  # chiedere di poter accedere all'elemento di indice 10 genera un'eccezione

Esercizio
--------
In questo esercizio si devono aggiungere stringhe e numeri nella lista corretta usando il metodo "append". Si devono inserire i numeri 1,2 e 3 alla lista "numbers" e le parole "hello" e "world" alla lista "strings".

Inoltre, si deve assegnare alla variable second_name il valore del secondo elemento della lista "strings" usando l'operatore parentesi quadre '[]'. Da notare che l'indice parte da 0, quindi se si vuole accedere al secondo elemento della lista, il suo indice sarà 1.  

Tutorial Code
-------------
numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# Scrivi il tuo codice qui
second_name = None


# Questo codice dovrebbe stampare il contenuto degli array e il secondo elemento della lista "names" (Eric)
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)

Expected Output
---------------
[1, 2, 3]
["hello", "world"]
The second name on the names list is Eric

Solution
--------

numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# Scrivi il tuo codice qui
numbers.append(1)
numbers.append(2)
numbers.append(3)

strings.append("hello")
strings.append("world")

second_name = names[1]

# Questo codice dovrebbe stampare il contenuto degli array e il secondo elemento della lista "names" (Eric)
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)