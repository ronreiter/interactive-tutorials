I generator sono molto facili da implementare, ma un po' difficili da comprendere.

I generatori vengono utilizzati per creare iteratori, ma con un approccio diverso. I generatori sono funzioni semplici che restituiscono un insieme iterabile di elementi, uno alla volta, in un modo speciale.

Quando inizia un'iterazione su un insieme di elementi utilizzando l'istruzione for, il generatore viene eseguito. Quando il codice della funzione del generatore raggiunge un'istruzione "yield", il generatore cede la sua esecuzione al ciclo for, restituendo un nuovo valore dall'insieme. La funzione generatore può generare quanti valori desidera (potenzialmente infiniti), restituendo ciascuno a suo turno.

Ecco un semplice esempio di una funzione generatore che restituisce 7 numeri interi casuali:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Questa funzione decide autonomamente come generare i numeri casuali ed esegue le istruzioni yield una alla volta, sospendendo l'esecuzione per restituirla al ciclo for principale.

Esercizio
--------

Scrivi una funzione generatore che restituisca la serie di Fibonacci. Sono calcolati utilizzando la seguente formula: i primi due numeri della serie sono sempre pari a 1, e ciascun numero successivo restituito è la somma degli ultimi due numeri.
Suggerimento: puoi utilizzare solo due variabili nella funzione generatore? Ricorda che le assegnazioni possono essere effettuate simultaneamente. Il codice

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

scambierà simultaneamente i valori di a e b.