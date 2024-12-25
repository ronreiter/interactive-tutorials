Generatoarele sunt foarte ușor de implementat, dar puțin dificile de înțeles.

Generatoarele sunt utilizate pentru a crea iteratoare, dar cu o abordare diferită. Generatoarele sunt funcții simple care returnează un set iterabil de elemente, unul câte unul, într-un mod special.

Când începe o iterare peste un set de elemente folosind instrucțiunea for, generatorul este executat. Odată ce codul funcției generatorului ajunge la o instrucțiune "yield", generatorul își cedează execuția înapoi la bucla for, returnând o nouă valoare din set. Funcția generatorului poate genera câte valori dorește (posibil infinite), returnându-le pe rând pe fiecare.

Iată un exemplu simplu de funcție generator care returnează 7 numere întregi aleatorii:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Această funcție decide singură cum să genereze numerele aleatorii și execută instrucțiunile yield una câte una, oprindu-se între ele pentru a ceda execuția înapoi la bucla principală for.

Exercițiu
--------

Scrie o funcție generator care returnează seria Fibonacci. Ele sunt calculate utilizând următoarea formulă: Primele două numere ale seriei sunt întotdeauna egale cu 1, iar fiecare număr consecutiv returnat este suma ultimelor două numere.
Sugestie: Poți folosi doar două variabile în funcția generator? Ține minte că atribuțiile pot fi făcute simultan. Codul

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

va schimba simultan valorile lui a și b.