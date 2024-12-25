Listor är mycket liknande arrayer. De kan innehålla vilken typ av variabel som helst, och de kan innehålla så många variabler som du önskar. Listor kan också itereras över på ett mycket enkelt sätt. Här är ett exempel på hur man bygger en lista.

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

Att försöka nå ett index som inte existerar genererar ett undantag (ett fel).

    mylist = [1,2,3]
    print(mylist[10])

Övning
--------

I den här övningen behöver du lägga till siffror och strängar till rätt listor med hjälp av "append"-metoden för listor. Du måste lägga till siffrorna 1,2 och 3 till "numbers"-listan, och orden 'hello' och 'world' till variabeln strings.

Du måste också fylla i variabeln second_name med det andra namnet i names-listan, med hjälp av hakparantesoperatören `[]`. Observera att index är nollbaserat, så om du vill komma åt det andra elementet i listan är dess index 1.